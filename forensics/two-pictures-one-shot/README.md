# two-pictures-one-shot  
## Contributors

Justin Hutchins

## Flag

MHCTF{d0nt_r3us3_OTP!}

## Idea

There are two original images, `flag.png` and `logo.png`, which are both XOR blended with a one-time pad, `pad.png`. This produces the two files that are provided in the challenge, `image1.png` and `image2.png`. The challenge is to realize that these images have been encrypted using a one-time pad, and to realize that the XOR product of the two encrypted images will reveal the contents of the unencrypted images.

## Solution

The tool I used is `gmic`, which provides functionality to XOR blend two images together. The command to create `result.png` is:  
`gmic image1.png image2.png -blend xor -o result.png`  
The flag is clearly visible in `result.png`.


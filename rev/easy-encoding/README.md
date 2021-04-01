# easy-encoding  
##Contributors

Justin Hutchins  
##Idea

A straightforward reverse engineering challenge where an encoded flag and the encoder are provided. Can be solved using brute force, by generating and encoding strings until a match is found, or by writing a decoder, which is relatively easy after seeing that the encoding relies on reversible XOR operations. 

##Solution
One solution is to write a script that uses brute force to find the string that has the same encoding and is therefore the flag. Another solution is to actually reverse engineer the binary using a tool such as Ghidra and realize that the encoder uses a simple and reversible XOR algorithm. Knowing the algorithm, it's easy to write a decoder that accepts the encoded string and prints the decoded flag. `decode.cpp` is an example of such a program and can be compiled with `g++ decode.cpp -decode`. To use the decoder, simply execute:  
`./decode "$(cat encoded.txt)"`

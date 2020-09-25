# Git
## Overview

> Git is a free and open source distributed version control system designed to 
handle everything from small to very large projects with speed and efficiency.
>

## Commands
* `git checkout -b <new branch name>`

[Documentation](https://git-scm.com/docs/git-checkout)

**Description:** Create a new branch and check it out in one command. Checking it out just means switching to it
and making it the working branch.

**Example:** Use it anytime you want to make changes to the project, but don't want to affect the `master` branch.
For example, I created the `dev` branch to develop projects on so that the `master` branch was protected.
Changes made on the `dev` branch can later be moved into the `master` branch (there are a lot of ways to do this).

* `git add <filename>`

[Documentation](https://git-scm.com/docs/git-add)

**Description:** Adds changes that you made to your file to be included in the next commit.

**Example:** Use this to make sure that your changes will be saved in the next commit. You can also use -A to include all changes you make.

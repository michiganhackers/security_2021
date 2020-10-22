# Git
## Overview

> Git is a free and open source distributed version control system designed to 
handle everything from small to very large projects with speed and efficiency.
>

## Basic Commands
### init
`git init`

[Documentation](https://git-scm.com/docs/git-init)

**Description:** "Initialize." Creates an empty repository in the current directory.

**Use Case:** Whenever you want to make a new git repository (that doesn't already exist).

### status
`git status`

[Documentation](https://git-scm.com/docs/git-status)

**Description:** This command tells you what's going on your local repo. It tells you about any new files, deleted files, or changed files that git hasn't tracked yet. This is also where you see staged files (after running `git add`).

**Use Case:** Use this command to see what's going on in your local repository. Run this command often as a sanity check.

### add
`git add <filename>`

[Documentation](https://git-scm.com/docs/git-add)

**Description:** Adds changes that you made to your file to be included in the next commit.

**Use Case:** Use this to make sure that your changes will be saved in the next commit. You can also use -A to include all changes you make.

### commit
`git commit`

[Documentation](https://git-scm.com/docs/git-commit)

**Description:** Commit your changes to the repository. This command takes changes in the staging area (see `git add`) and updates the current branch to reflect these changes. 
In the commit message, include the commit title on the first line, and a brief description on subsequent lines.

**Use Case:** This is how you update your repository to match changes you've made. Each commit can be reverted back to if needed.

### checkout (new branch)
`git checkout -b <new branch name>`

[Documentation](https://git-scm.com/docs/git-checkout)

**Description:** Create a new branch and check it out in one command. Checking it out just means switching to it
and making it the working branch.

**Use Case:** Use it anytime you want to make changes to the project, but don't want to affect the `master` branch.
For example, I created the `dev` branch to develop projects on so that the `master` branch was protected.
Changes made on the `dev` branch can later be moved into the `master` branch (there are a lot of ways to do this).

### branch
`git branch <branchname>`

[Documentation](https://git-scm.com/docs/git-branch)

**Description:** Creates a new branch. 
Note: only works in newer versions of git.

**Use Case:** Create a new branch to make changes without affecting the master branch. New features, bug fixes, etc.

### switch
`git switch <branchname>`

[Documentation](https://git-scm.com/docs/git-switch)

**Description:** Switch to an existing branch.
Note: only works in newer versions of git.

**Use Case:** Switch to a different branch to make changes there.

### merge
`git merge <branchname>`

[Documentation](https://git-scm.com/docs/git-merge)

**Description:** Merge commits made in `<branchname>` into the current branch. 
Sometimes, git can't figure out how to merge the branches on its own. This is called a _merge conflict,_ which you
have to [manually resolve](https://git-scm.com/docs/git-merge#_how_conflicts_are_presented).

**Use Case:** Merge a branch into master when you've made successful changes that you want to incorporate into the main branch.

## Remote Commands
### push
`git push <remote> <branch>`

[Documentation](https://git-scm.com/docs/git-push)

**Description:** Uploads content from the local repository into a remote repository and transfers the commits you made on your computer. This command has to be used with caution because it could unintentionally overwrite changes. 

**Use Case:** This command should be used after you have staged and committed the changes you made to a file and would like to transfer those changes to a remote repository. An example of this is if I created a branch, made edits and wanted to send that branch the remote repo, I would use the `git push` command.

### pull
`git pull`

[Documentation](https://git-scm.com/docs/git-pull)

**Description:** `git pull` is the same as running `git fetch` followed by `git merge`. This command gets changes from a remote repository and merges them into the current branch.

**Use Case:** Use this command when changes have been made to the remote repository (i.e. on GitHub) and you want these changes to be reflected on your local computer.

### clone
`git clone <remote>`

[Documentation](https://git-scm.com/docs/git-clone)

**Description:** This command makes a copy of an already existing repository and puts it in the current directory. 

**Use Case:** Most often used to copy a remote repository (on GitHub / GitLab / etc.) to your local computer.

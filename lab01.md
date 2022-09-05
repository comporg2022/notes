
So today we generated an ssh key pair.
on the server:

```
ssh-keygen -t rsa
```

this command generates two keys in `~/.ssh/` (`~` stands for your home directory)

one of the keys (public) needs to be added to your github profile:

```
cat ~/.ssh/id_rsa.pub
```

what you see there should be added to your profile, ssh & gpg keys section, then 'new ssh key' or something like that.

now you are almost a step to be able to commit and push from github.

click on the link if you didn't yet: https://classroom.github.com/a/1HPTClMS

it'll open a private github repository for you.

get the 'ssh' link to you repo in github.

then on the server:

git clone git@github.com:comporg22/github-kickstart-<username>.git (or something like that)

then you'll get the repo in the current directory.

change your directory to it:

```
cd github-kickstart-<username>.git
```


```
pwd
```

will show you where are you.

```
git status
```

this is a command you'd like to you a lot. it will show you information about
files in your git repo directory.

it shows that you have no files now probably.

create a file:

nano test.txt

at the bottom of the terminal you'll see hints on how to use nano. `^` - means
`ctrl`.

so when you wrote whatever you want, use `ctrl+x` to exit.
say `Y` to save it.
say `enter` to save with the suggested name.

now `git status` again.

you'll see you have an untracked file.

git tracks the changes in files, and it can remember the state of the files.

later you can rollback to any of the previous states.

so in order for the file to be trackable by git, you need to add it:

```
git add <yourfile>
```

now

```
git status
```

it'll show you that the file is new, and it is trackable by git.

let's do our first commit now: i. e. save the state of the files in the
repository. but we only have one file.

```
git commit -a -m "first commit"
```

now, if you are doing this for the first time, and you probably are, there is
a problem.

who changed the files? several people can work on the same git repository. but
who are you? git doesn't know anything about you right now.

so it suggests you to use commands that start with `git config --global`.

do what it says. add your github email as `user.email` and just any name, as
`user.name`.

now, if you do `cat ~/.gitconfig` you'll see that this information is now
written to the git configuration file, and since now git will know who are
you, and therefore, who is the author of the commit.

now again.

```
git commit -a -m "first commit"
```

`-m` needs an argument - some comment on your changes.

you may write you fixed the problem, or added a feature.

now it is commited, you can do

```
git push origin
```

now refresh the github repo page, and you'll see your file there.

try to add the second commit.

change the file.

do git commit with different message

git push.

now, the last command for you today:

```
git log
```

it shows the log of the changes.

you also can see it on the repo page.




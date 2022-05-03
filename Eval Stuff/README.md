# Tools That I Use for Evals

## Current Tools:

- Makefile
	1. Norminette Rule {make norm}
		> This runs Norminette with its flag (-R CheckForbiddenSourceHeader) when you run make on the file that you specify, you can enter nothing and it just runs it on all files in the same location as the Makefile.
	2. Git Clone Rule {make git}
		> This will output a prompt to specify the Git Repository, once filled it will then ask for the project's name (this is so you can have the proper folder name for more convenience when using multiple testers, e.g. cloning a get_next_line project but you've setup all the testers to use GNL as the path name, so you would want it to be called GNL)

To run Norm:

---

Run make or make norm in the command line while on the Makefile's directory, then enter the specified directory with the prompt.
e.g. >make; outputs: "Specify the file on which to run Norm:" ./Hello/World/!.c runs Norm on the file !.c.

---

To run Git:

---

Run make git in the command line on the same directory as the Makefile, enter the Git Repository's link with the prompt, then enter the name of the project with the second prompt.
e.g. >make git; outputs: "Enter the Git Repository's link:", user enters: "https://github.com/nn425h411/42-Stuff.git", second output: "Specify the Project's name:", user enters: "Haha, I steal", now there's a file called 'Haha, I steal' and it has my Repo's content.

---

### Feel free to use these.

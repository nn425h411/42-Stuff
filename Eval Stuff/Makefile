# This little simple Makefile runs the Norminette {make norm} #
# with  its  flag  and  can run a  Git  clone  {make git}     #
# making evals and checking your own files more efficient     #
## (you could just make a macro but that's less cool comp-   ##
## ared to some red or yellow text with a background)        ##
CBLUE 	= \033[0;44;91m
CRED	= \033[1;97;41m
RED 	= \033[0;41m
YELLOW	= $(shell tput -Txterm setaf 3)
NORM	= Norminette -R CheckForbiddenSourceHeader 

norm:
	@echo "$(CRED)Specify the file on which to run Norm on:$<$(CBLUE)"; \
	read FILE; \
	echo "Running norm on: $$FILE"; \
	$(NORM)$$FILE;

git:
	@echo "$(CBLUE)Defense Time!\n"; \
	echo "$(YELLOW)Specify the GIT Repository:"; \
	read GIT; \
	echo "$(YELLOW)Specify the Project's name:"; \
	read NAME; \
	git clone $$GIT $$NAME; \
	echo "$(CBLUE)\nCloned $$GIT into $$NAME (if it was succesful)";

.PHONY: norm git

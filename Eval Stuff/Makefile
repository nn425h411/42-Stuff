# This little simple Makefile runs the Norminette with its flag
# on the file that you specified to make evals and checking
# your own files more efficient
## (you could just make a macro but that's less cool ##
## compared to some red text with a background) ##
CBLUE = \033[0;44;91m
CRED = \033[1;97;41m
RED = \033[0;41m
NORM = Norminette -R CheckForbiddenSourceHeader 

norm:
	@echo "$(CRED)Specify the file on which to run Norm:$<$(CBLUE)"; \
	read FILE; \
	echo "Running Norminette on: $$FILE"; \
	$(NORM)$$FILE;

.PHONY: norm

NAME = main

NSRCS = ft_strlen.s

CSRCS = main.c

OFLAGS = ./nasm -f macho64

CFLAGS = gcc -Wextra -Werror -W

CLEAN = rm -f

$(NAME):
	$(OFLAGS) $(NSRCS) 
	$(CFLAGS) *.o $(CSRCS) -o $(NAME)

clean:
	$(CLEAN) *.o

fclean: clean
	$(CLEAN) $(NAME)

#			#
#  HEADER	#
#			#

NAME = push_swap

SRC = 	main.c 			\
		check_args.c 	\
		push_swap.c 	\
		push_swap2.c 	\
		tools.c 		\
		check_list.c 	\
		move.c 			\
		list_add.c 		\
		delete_list.c 	\
		print_list.c 	\
		fill_list.c

BIN = 	main.o 			\
		check_args.o 	\
		push_swap.o 	\
		push_swap2.o 	\
		tools.o 		\
		check_list.o 	\
		move.o 			\
		list_add.o 		\
		delete_list.o 	\
		print_list.o 	\
		fill_list.o

FLAGS = -Wall -Werror -Wextra


#   ----------------------------------------   #
#											   #
#                    RULES					   #
#											   #
#   ----------------------------------------   #


all:  $(NAME)

$(NAME): 
	@make -C libft/
	@gcc $(FLAGS) -I libft/ -c $(SRC)
	@printf "\n\e[32m[✔]\e[36m "
	@printf "PROJECT PUSH_SWAP\t\t\n\n"
	@printf "\e[32m----------------------------------\e[36m\n"
	@gcc $(FLAGS) $(BIN) -L libft/ -lft -o $(NAME)


clean:
	@make clean -C libft/
	@rm -f $(BIN)
	@printf "\e[31m----------------------------------\n"
	@printf "[✔]\e[36m $(NAME): Objects deleted\n"
	@printf "\e[31m----------------------------------\e[36m"
	@printf " \n"

fclean: clean
	@make fclean -C libft/
	@rm -f $(BIN) $(NAME)
	@printf "\e[31m----------------------------------\n"
	@printf "[✔]\e[36m $(NAME): All deleted\n"
	@printf "\e[31m----------------------------------\e[36m"
	@printf "\033[0m\n"

re: fclean all

.PHONY: re fclean clean all
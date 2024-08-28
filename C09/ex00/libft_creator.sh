#!/bin/bash
cc -Wall -Wextra -Werror -c *.c
ar -q libft.a  *.o


LIB_DIR        = libft

PRINTF_DIR     = $(LIB_DIR)/ft_printf
PRINTF_FILE    = printf.a
PRINTF         = $(PRINTF_DIR)/$(PRINTF_FILE)

LIBFT_DIR      = $(LIB_DIR)/libft
LIBFT_FILE     = libft.a
LIBFT          = $(LIBFT_DIR)/$(LIBFT_FILE)

MAKE_LIB       = @make --no-print-directory -C

CFLAGS         += -I$(PRINTF_DIR)/include -I$(LIBFT_DIR)/include
LIB            += $(PRINTF) $(LIBFT)

all: lib

lib: $(PRINTF) $(LIBFT)

$(PRINTF):
	$(MAKE_LIB) $(PRINTF_DIR)

$(LIBFT):
	$(MAKE_LIB) $(LIBFT_DIR)

lib_clean:
	$(MAKE_LIB) $(PRINTF_DIR) clean
	$(MAKE_LIB) $(LIBFT_DIR) clean

lib_fclean:
	$(MAKE_LIB) $(PRINTF_DIR) fclean
	$(MAKE_LIB) $(LIBFT_DIR) fclean

lib_re:
	$(MAKE_LIB) $(PRINTF_DIR) re
	$(MAKE_LIB) $(LIBFT_DIR) re

.PHONY: all lib lib_clean lib_fclean lib_re

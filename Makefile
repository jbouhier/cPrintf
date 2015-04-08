NAME    :=  libmy_printf_$(shell uname -m)-$(shell uname -s)
SNAME   :=  $(NAME).a
DNAME   :=  $(NAME).so
SRC     :=  $(wildcard src/*.c)
SDIR    :=  build-static
SOBJ    :=  $(SRC:src/%.c=$(SDIR)/%.o)
DDIR    :=  build-shared
DOBJ    :=  $(SRC:src/%.c=$(DDIR)/%.o)
CFLAGS  :=  -ansi -pedantic -Wall -Werror -W -g3 -std=c99
LDFLAGS :=  -L.
ARFLAGS :=	-rc

.PHONY: all clean fclean re my_printf_static my_printf_dynamic

all: my_printf_static my_printf_dynamic

my_printf_static: $(SNAME)

my_printf_dynamic: $(DNAME)

$(SNAME): $(SOBJ)
	$(AR) $(ARFLAGS) $@ $^

$(DNAME): CFLAGS += -fPIC
$(DNAME): LDFLAGS += -shared
$(DNAME): $(DOBJ)
	$(CC) $(LDFLAGS) $^ -o $@

$(SDIR)/%.o: src/%.c | $(SDIR)
	$(CC) $(CPPFLAGS) $(CFLAGS) -o $@ -c $<

$(DDIR)/%.o: src/%.c | $(DDIR)
	$(CC) $(CPPFLAGS) $(CFLAGS) -o $@ -c $<

$(SDIR) $(DDIR):
	@mkdir $@

clean:
	$(RM) -r $(SDIR) $(DDIR)

fclean: clean
	$(RM) $(SNAME) $(DNAME)

re: fclean all

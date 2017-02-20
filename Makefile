## Makefile for Makefile in /home/hofman_p//W/Projets/Minitalk
## 
## Made by pierre hofman
## Login   <hofman_p@epitech.net>
## 
## Started on  Mon Mar 18 00:58:29 2013 pierre hofman
## Last update Sat Mar 23 03:30:43 2013 pierre hofman
##

CC=		cc

NAMECLIENT=	./Client/client

SRCLIENT=	./Client/client.c \
		base.c \
		base2.c

OBJCLIENT=	$(SRCLIENT:.c=.o)

NAMESERVER=	./Server/server

SRCSERVER=	./Server/server.c \
		base.c \
		base2.c

OBJSERVER=	$(SRCSERVER:.c=.o)

all:		$(NAMECLIENT) $(NAMESERVER)

$(NAMESERVER):	$(OBJSERVER)
		$(CC) -o $(NAMESERVER) $(SRCSERVER)

$(NAMECLIENT):	$(OBJCLIENT)
		$(CC) -o $(NAMECLIENT) $(SRCLIENT)

clean:
		rm -f $(OBJCLIENT) $(OBJSERVER)

fclean:		clean
		rm -f $(NAMECLIENT) $(NAMESERVER)

re:		fclean all
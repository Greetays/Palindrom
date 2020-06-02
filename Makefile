all: palindrom
palindrom: src/main.c src/processing_text.c src/search_pal.c
		gcc -Wall src/main.c src/processing_text.c src/search_pal.c -o palindrom
		./palindrom src/text.txt


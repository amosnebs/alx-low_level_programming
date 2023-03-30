; Declare needed C  functions
	extern	printf		; the C function, to be called

	section .data		; Data section, initialized variables
msg:	db "Hello, Holberton", 0; C string needs 0
fmt:	db "%s", 10, 0		; The printf format, "\n",'0'

	section .text		; Code section.

	global main		; the standard gcc entry point
main:				; the program label for the entry point


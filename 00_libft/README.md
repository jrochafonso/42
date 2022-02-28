# 00_libft

Libft
Your very first own library
Summary: This project aims to code a C library regrouping usual functions that you’ll be use for all your next projects.
Version: 15

C programming can be very tedious when one doesn’t have access to those highly useful standard functions. This project allows you to re-write those functions, understand them, and learn to use them. This library will help you with all your future C projects.
Take the time to expand your libft throughout the year. But always, make sure to check which functions are allowed !

Common Instructions
• Your project must be written in C.
• Your project must be written in accordance with the Norm. If you have bonus files/functions, they are included in the norm check and you will receive a 0 if there is a norm error inside.
• Your functions should not quit unexpectedly (segmentation fault, bus error, double free, etc) apart from undefined behaviors. If this happens, your project will be considered non functional and will receive a 0 during the evaluation.
• All heap allocated memory space must be properly freed when necessary. No leaks will be tolerated.
• If the subject requires it, you must submit a Makefile which will compile your source files to the required output with the flags -Wall, -Wextra and -Werror, use cc, and your Makefile must not relink.
• Your Makefile must at least contain the rules $(NAME), all, clean, fclean and re.
• To turn in bonuses to your project, you must include a rule bonus to your Makefile, which will add all the various headers, librairies or functions that are forbidden on the main part of the project. Bonuses must be in a different file _bonus.{c/h} if the subject does not specify anything else. Mandatory and bonus part evaluation is done separately.
• If your project allows you to use your libft, you must copy its sources and its associated Makefile in a libft folder with its associated Makefile. Your project’s Makefile must compile the library by using its Makefile, then compile the project.
• We encourage you to create test programs for your project even though this work won’t have to be submitted and won’t be graded. It will give you a chance to easily test your work and your peers’ work. You will find those tests especially useful during your defence. Indeed, during defence, you are free to use your tests and/or the tests of the peer you are evaluating.
• Submit your work to your assigned git repository. Only the work in the git reposi- tory will be graded. If Deepthought is assigned to grade your work, it will be done after your peer-evaluations. If an error happens in any section of your work during Deepthought’s grading, the evaluation will stop.

Write your own library, containing an extract of important functions for your cursus.

Technical considerations
• It is forbidden to declare global variables.
• If you need subfunctions to write a complex function, you should define these sub- functions as static to avoid publishing them with your library. It would be a good habit to do this in your future projects as well.
• Submit all files in the root of your repository.
• It is forbidden to submit unused files.
• Every .c must compile with flags.
• You must use the command ar to create your library, using the command libtool is forbidden.

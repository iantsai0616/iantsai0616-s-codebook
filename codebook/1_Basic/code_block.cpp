把執行視窗改成 terminal
去 Settings>Environment>"Terminal to launch console programs"
把 xterm -T $TITLE -e 改成gnome-terminal --title=$TITLE -x

自訂編譯參數
去 Settings>Compiler>Compiler Settings>Other Compiler Options
和 Settings>Compiler>Linker Settings>Other Linker Options
都加上


-Wall -Wextra -Wshadow -Wconversion
-fsanitize=address,undefined 
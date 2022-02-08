/*
 * Modify Exercise 5, in Chapter 1 to have a function drawBox() that takes the width and height of the box in asterisks as formal parameters.
 * Modify the program further to include three functions: drawLine(), drawSides(), and drawBox().
 * The function drawLine() will take two parameters: the length of the line and a string that will be printed length times to draw the line.
 * The function drawSides() will take three parameters: the height of the sides, the width of the box that will be formed (both lines must be drawn at the same time), and a string used to represent a side.
 * The function drawBox() will take three parameters: the width and height of the box and a string
 *
 * Exercises 31 used to represent the sides. For example, if called as drawBox(5,4,"CisFun"), the output would be:
 *      CisFunCisFunCisFunCisFunCisFun
 *      CisFun                  CisFun
 *      CisFun                  CisFun
 *      CisFunCisFunCisFunCisFunCisFun
 */

#include <stdio.h>
#include <string.h>

/* Draws the top and bottom of the box
 * @param line_len  Number of times to print the output string
 * @param output    The output string
 */
void draw_line(int line_len, char* output) {
    for (int i = 0; i < line_len; ++i) {
        printf("%s", output);
    }
    printf("\n");
}

/* Draws the sides and blank space of the box
 * @param side_height   Height of the box
 * @param box_width     Width of the box
 * @param output        String to make up the sides of the box
 */
void draw_sides(int side_height, int box_width, char* output) {
    int output_len = strlen(output),                             // Length of output
        blank_space = (box_width * output_len) - (output_len * 2);  // Num of blank spaces
    for (int i = 0; i < side_height - 2; ++i) {
        printf("%s", output);
        for (int j = 0; j < blank_space; ++j) {
            printf(" ");
        }
        printf("%s\n", output);
    }
}

/* Does the building of the box
 * @param side_width    Width of the box
 * @param box_height    Height of the box
 * @param output        String to make up the box
 */
void draw_box(int side_width, int box_height, char* output) {
    draw_line(side_width, output);
    draw_sides(box_height, side_width, output);
    draw_line(side_width, output);
}

/* Handles the user input and calling the creation of the box
 *
 */
int main() {
    int width, height;
    char output[20];

    printf("Enter the width of your box: ");
    scanf("%d", &width);

    printf("Enter the height of your box: ");
    scanf("%d", &height);

    printf("Enter the output character: ");
    scanf("%s", output);

    draw_box(width, height, output);
}
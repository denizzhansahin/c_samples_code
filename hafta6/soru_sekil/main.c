int main(void)
{
 int line; /* line counter */
 int space; /* space counter */
 int asterisk; /* asterisk counter */
 /* top half */
 for (line = 1; line <= 11; line += 2)
 {
 /* print preceding spaces */
 for (space = ( 11 - line ) / 2; space > 0; space--)
 {
 printf( " " );
 } /* end for */
 /* print asterisks */
 for (asterisk = 1; asterisk <= line; asterisk++)
 {
 printf( "*" );
 } /* end for */
 printf("\n");
 } /* end for */
 /* bottom half */
 for (line = 9; line >= 0; line -= 2)
 {
 /* print preceding spaces */
 for (space = ( 11 - line ) / 2; space > 0; space--)
 {
 printf( " " );
 } /* end for */
 /* print asterisks */
 for (asterisk = 1; asterisk <= line; asterisk++)
 {
 printf("*");
 } /* end for */
 printf( "\n" );
 } /* end for */
} /* end main */

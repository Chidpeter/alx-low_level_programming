#include <stdio.h>

int main() {
	    int i, j;
	        for (i = 0; i < 100; i++) {
			        for (j = i + 1; j < 100; j++) {
					            if (i == j) {
							                    continue;
									                }
						                if (i % 10 == j / 10 && i / 10 < j % 10) {
									                putchar(i / 10 + '0');
											                putchar(i % 10 + '0');
													                putchar(' ');
															                putchar(j / 10 + '0');
																	                putchar(j % 10 + '0');
																			                if (i == 98 && j == 99) {
																						                    break;
																								                    }
																					                putchar(',');
																							                putchar(' ');
																									            }
								        }
				    }
		    return 0;
}

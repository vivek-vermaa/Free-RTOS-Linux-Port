/*
 * supporting_functions.h
 *
 *  Created on: 01-May-2020
 *      Author: Vivek Verma
 */


#include "main_app.h"
#include <stdint.h>
#include "supporting_functions.h"

/* The task functions. */
void vTask1(void *pvParameters);
void vTask2(void *pvParameters);
void vTask3(void *pvParameter);
void vTask4(void *pvParameter);

/* Define the strings that will be passed in as the task parameters. These are
defined const and off the stack to ensure they remain valid when the tasks are
executing. */
const char *pcTextForTask1 = "Task 1 is running\r\n";
const char *pcTextForTask2 = "Task 2 is running\r\n";
const char *pcTextForTask3 = "Task 3 is running\r\n";
const char *pcTextForTask4 = "Task 4 is running\r\n";

/*-----------------------------------------------------------*/

int main_app(void)
{
	/* Create  tasks and pass string parameters to the task functions. */

	xTaskCreate(vTask1, "Task 1", 300, (void*)pcTextForTask1, 1, NULL);
	xTaskCreate(vTask2, "Task 2", 300, (void*)pcTextForTask2, 2, NULL);
	xTaskCreate(vTask3, "Task 3", 300, (void*)pcTextForTask3, 2, NULL);
	xTaskCreate(vTask4, "Task 4", 300, (void*)pcTextForTask4, 1, NULL);

	return 0;
}
/*-----------------------------------------------------------*/

void vTask1(void *pvParameters)
{

	/* The string to print out is passed via the parameter.  Cast this to a
	character pointer. */
	char *pcTaskString;
	pcTaskString = (char *)pvParameters;

	/* As per most tasks, this task is implemented in an infinite loop. */
	for(;;)
	{
		/* Print out the  */
		vPrintString(pcTaskString);
		vTaskDelay(1000);

	}
}
/*-----------------------------------------------------------*/

void vTask2(void *pvParameters)
{

	char *pcTaskString;
	pcTaskString = (char *)pvParameters;

	/* As per most tasks, this task is implemented in an infinite loop. */
	for(;;)
	{
		/* Print out the string parameter of this task. */
		vPrintString(pcTaskString);
		vTaskDelay(1000);
	}
}

void vTask3(void *pvParameter)
{

	char *pcString;
	pcString = (char *)pvParameter;

	for(;;)
	{
		vPrintString(pcString);
		vTaskDelay(1000);
	}

}

void vTask4(void *pvParameter)
{

	char *pcString;
	pcString = (char *)pvParameter;

	for(;;)
	{
		vPrintString(pcString);
		vTaskDelay(1000);
	}

}



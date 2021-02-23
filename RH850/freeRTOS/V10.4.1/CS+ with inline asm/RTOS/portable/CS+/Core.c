/* PRQA S 1503,2870,3140 ++ # used by RTOS as can be ignored */
/******************************************************************************
 *
 *  FUNCTION    : vApplicationStackOverflowHook
 *
 *  RETURN VALUE: void
 *
 *  PARAMETERS  : None
 *
 *  ABSTRACT    : Callback from RTOS
 *
 ******************************************************************************/
void vApplicationStackOverflowHook(void)
{
    /* This will be called if a task overflows its stack.  pxCurrentTCB
       can be inspected to see which is the offending task. */
    for (;; )
    {
        ;
    }
}
/******************************************************************************
 *
 *  FUNCTION    : vApplicationMallocFailedHook
 *
 *  RETURN VALUE: void
 *
 *  PARAMETERS  : None
 *
 *  ABSTRACT    : Callback from RTOS
 *
 ******************************************************************************/
/* PRQA S 1503 #place holders functions  */
void vApplicationMallocFailedHook(void)
{
    /* This will be called if a Malloc failed */
    for (;; )
    {
        ;
    }
}

/******************************************************************************
 * Function Name : vApplicationIdleHook
 * Description   : Monitor task (SCI) running in background
 * Arguments     : none
 * Return Value  : none
 ******************************************************************************/
/* PRQA S 3408 1 #Extern declaration is present in RTOS file */
void vApplicationIdleHook(void)
{
    //Monitor();
}

/******************************************************************************
 *                               END OF FILE
 ******************************************************************************/

VOID gipoolStartup(VOID){
#if 0
    // Initialize heap
    hHeap = RtlCreateHeap(HEAP_GROWABLE, NULL, 0, 0, NULL, NULL);
    if (NULL == hHeap)
    {
        RtlCliDisplayString("Failed to create heap\n");
        return;
    }

    // Initialize keyboard input
    if (!RtlCliOpenInputDevice(&hKeyboard, KeyboardType))
    {
        RtlCliDisplayString("Failed to open keyboard device\n");
        return;
    }

    // Main loop
    while (TRUE)
    {
        CHAR Command[BUFFER_SIZE] = {0};
        BOOLEAN bExist = FALSE;

        RtlClipDisplayPrompt();

        if (!RtlCliReadInput(Command, BUFFER_SIZE))
        {
            RtlCliDisplayString("Failed to read input from keyboard\n");
            continue;
        }
    }
#else
    RtlCliDisplayString("╔═══════════════════════════════════════════════════╗\n");
    RtlCliDisplayString("║ GIPool is not implemented yet                     ║\n");
    RtlCliDisplayString("║ How about we explore the area ahead of us later?. ║\n");
    RtlCliDisplayString("║ We will never gonna give you up                   ║\n");
    RtlCliDisplayString("╚═══════════════════════════════════════════════════╝\n");

    
#endif
}
// offlineasm input hash: 366f762bf8554daa39ecdf7ff59467f342a33c94 b0ad8870b23498140f1074e466dae186992d4f99 e7598050c46ed0deec87eb9454e620ef86f7f53f
#if !OFFLINE_ASM_ARMv7s && OFFLINE_ASM_JSVALUE64 && !OFFLINE_ASM_BIG_ENDIAN && !OFFLINE_ASM_WIN64 && !OFFLINE_ASM_C_LOOP && !OFFLINE_ASM_ASSERT_ENABLED && !OFFLINE_ASM_ARM && !OFFLINE_ASM_ARMv7 && !OFFLINE_ASM_ARMv7_TRADITIONAL && !OFFLINE_ASM_MIPS && !OFFLINE_ASM_SH4 && !OFFLINE_ASM_X86 && OFFLINE_ASM_X86_64 && !OFFLINE_ASM_EXECUTION_TRACING && OFFLINE_ASM_VALUE_PROFILER && OFFLINE_ASM_JIT_ENABLED && !OFFLINE_ASM_ALWAYS_ALLOCATE_SLOW
OFFLINE_ASM_BEGIN

OFFLINE_ASM_GLUE_LABEL(llint_begin)
    "\tmovl %eax, 3148725999\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:177
    "\txorq %rax, %rax\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:178
    "\tcall *%rax\n"                                         // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:179

OFFLINE_ASM_GLUE_LABEL(llint_program_prologue)
    "\tpop %rcx\n"                                           // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:198
    "\tmovq %rcx, -16(%r13)\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:306
    "\tmovq -8(%r13), %rdx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:289
    "\taddl $5, 576(%rdx)\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:312
    "\tjs " LOCAL_LABEL_STRING(_offlineasm_prologue__continue) "\n"
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_entry_osr) "\n"
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:314
    "\ttestq %rax, %rax\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:315
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_prologue__recover) "\n"
    "\tmovq -16(%r13), %rcx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:316
    "\tpush %rcx\n"                                          // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:211
    "\tjmp *%rax\n"                                          // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:318

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_prologue__recover)
    "\tmovq -8(%r13), %rdx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:289

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_prologue__continue)
    "\tmovq 96(%rdx), %r10\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:327
    "\txorq %rsi, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:328
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"

OFFLINE_ASM_GLUE_LABEL(llint_eval_prologue)
    "\tpop %rcx\n"                                           // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:198
    "\tmovq %rcx, -16(%r13)\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:306
    "\tmovq -8(%r13), %rdx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:289
    "\taddl $5, 576(%rdx)\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:312
    "\tjs " LOCAL_LABEL_STRING(_offlineasm_0_prologue__continue) "\n"
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_entry_osr) "\n"
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:314
    "\ttestq %rax, %rax\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:315
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_0_prologue__recover) "\n"
    "\tmovq -16(%r13), %rcx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:316
    "\tpush %rcx\n"                                          // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:211
    "\tjmp *%rax\n"                                          // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:318

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_0_prologue__recover)
    "\tmovq -8(%r13), %rdx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:289

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_0_prologue__continue)
    "\tmovq 96(%rdx), %r10\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:327
    "\txorq %rsi, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:328
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"

OFFLINE_ASM_GLUE_LABEL(llint_function_for_call_prologue)
    "\tpop %rcx\n"                                           // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:198
    "\tmovq %rcx, -16(%r13)\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:306
    "\tmovq -32(%r13), %rdx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:277
    "\tmovq 24(%rdx), %rdx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:278
    "\tmovq 152(%rdx), %rdx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:279
    "\taddl $5, 576(%rdx)\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:312
    "\tjs " LOCAL_LABEL_STRING(_offlineasm_1_prologue__continue) "\n"
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_entry_osr_function_for_call) "\n"
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:314
    "\ttestq %rax, %rax\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:315
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_1_prologue__recover) "\n"
    "\tmovq -16(%r13), %rcx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:316
    "\tpush %rcx\n"                                          // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:211
    "\tjmp *%rax\n"                                          // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:318

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_1_prologue__recover)
    "\tmovq -32(%r13), %rdx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:277
    "\tmovq 24(%rdx), %rdx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:278
    "\tmovq 152(%rdx), %rdx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:279

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_1_prologue__continue)
    "\tmovq %rdx, -8(%r13)\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:293
    "\tmovq 96(%rdx), %r10\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:327
    "\txorq %rsi, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:328

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_functionForCallBegin)
    "\tmovl 72(%rdx), %eax\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:345
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:346
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:348
    "\ttestq %rax, %rax\n"
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_functionInitialization__argumentProfileDone) "\n"
    "\tmovq 344(%rdx), %rbx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:349
    "\timulq $40, %rax, %rcx\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:350
    "\tnegq %rax\n"                                          // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:351
    "\tsalq $3, %rax\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:352
    "\taddq %rcx, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:353

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_functionInitialization__argumentProfileLoop)
    "\tmovq -48(%r13, %rax, 1), %rcx\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:356
    "\tsubq $40, %rbx\n"                                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:357
    "\tmovq %rcx, 24(%rbx)\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:358
    "\taddq $8, %rax\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:366
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_functionInitialization__argumentProfileLoop) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_functionInitialization__argumentProfileDone)
    "\tmovl 48(%rdx), %eax\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:371
    "\tmovq 88(%rdx), %rcx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:372
    "\tmovq 43312(%rcx), %rcx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:373
    "\tsall $3, %eax\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:374
    "\taddq %r13, %rax\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:375
    "\tcmpq %rax, 16(%rcx)\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:376
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_functionInitialization__stackHeightOK) "\n"
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_stack_check) "\n"
    "\tmovq %rax, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_functionInitialization__stackHeightOK)
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"

OFFLINE_ASM_GLUE_LABEL(llint_function_for_construct_prologue)
    "\tpop %rcx\n"                                           // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:198
    "\tmovq %rcx, -16(%r13)\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:306
    "\tmovq -32(%r13), %rdx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:283
    "\tmovq 24(%rdx), %rdx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:284
    "\tmovq 160(%rdx), %rdx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:285
    "\taddl $5, 576(%rdx)\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:312
    "\tjs " LOCAL_LABEL_STRING(_offlineasm_2_prologue__continue) "\n"
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_entry_osr_function_for_construct) "\n"
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:314
    "\ttestq %rax, %rax\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:315
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_2_prologue__recover) "\n"
    "\tmovq -16(%r13), %rcx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:316
    "\tpush %rcx\n"                                          // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:211
    "\tjmp *%rax\n"                                          // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:318

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_2_prologue__recover)
    "\tmovq -32(%r13), %rdx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:283
    "\tmovq 24(%rdx), %rdx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:284
    "\tmovq 160(%rdx), %rdx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:285

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_2_prologue__continue)
    "\tmovq %rdx, -8(%r13)\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:293
    "\tmovq 96(%rdx), %r10\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:327
    "\txorq %rsi, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:328

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_functionForConstructBegin)
    "\tmovl 72(%rdx), %eax\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:345
    "\taddq $-1, %rax\n"                                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:346
    "\ttestq %rax, %rax\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:348
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_2_functionInitialization__argumentProfileDone) "\n"
    "\tmovq 344(%rdx), %rbx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:349
    "\timulq $40, %rax, %rcx\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:350
    "\tnegq %rax\n"                                          // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:351
    "\tsalq $3, %rax\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:352
    "\taddq %rcx, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:353

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_2_functionInitialization__argumentProfileLoop)
    "\tmovq -56(%r13, %rax, 1), %rcx\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:356
    "\tsubq $40, %rbx\n"                                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:357
    "\tmovq %rcx, 64(%rbx)\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:358
    "\taddq $8, %rax\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:366
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_2_functionInitialization__argumentProfileLoop) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_2_functionInitialization__argumentProfileDone)
    "\tmovl 48(%rdx), %eax\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:371
    "\tmovq 88(%rdx), %rcx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:372
    "\tmovq 43312(%rcx), %rcx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:373
    "\tsall $3, %eax\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:374
    "\taddq %r13, %rax\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:375
    "\tcmpq %rax, 16(%rcx)\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:376
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_2_functionInitialization__stackHeightOK) "\n"
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_stack_check) "\n"
    "\tmovq %rax, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_2_functionInitialization__stackHeightOK)
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"

OFFLINE_ASM_GLUE_LABEL(llint_function_for_call_arity_check)
    "\tpop %rcx\n"                                           // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:198
    "\tmovq %rcx, -16(%r13)\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:306
    "\tmovq -32(%r13), %rdx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:277
    "\tmovq 24(%rdx), %rdx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:278
    "\tmovq 152(%rdx), %rdx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:279
    "\taddl $5, 576(%rdx)\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:312
    "\tjs " LOCAL_LABEL_STRING(_offlineasm_3_prologue__continue) "\n"
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_entry_osr_function_for_call_arityCheck) "\n"
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:314
    "\ttestq %rax, %rax\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:315
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_3_prologue__recover) "\n"
    "\tmovq -16(%r13), %rcx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:316
    "\tpush %rcx\n"                                          // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:211
    "\tjmp *%rax\n"                                          // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:318

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_3_prologue__recover)
    "\tmovq -32(%r13), %rdx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:277
    "\tmovq 24(%rdx), %rdx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:278
    "\tmovq 152(%rdx), %rdx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:279

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_3_prologue__continue)
    "\tmovq %rdx, -8(%r13)\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:293
    "\tmovq 96(%rdx), %r10\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:327
    "\txorq %rsi, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:328
    "\tmovl -48(%r13), %eax\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:193
    "\tcmpl 72(%rdx), %eax\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:194
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_functionForCallBegin) "\n"
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_call_arityCheck) "\n"
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:197
    "\ttestl %eax, %eax\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:198
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_functionArityCheck__continue) "\n"
    "\tmovq 112(%rsp), %rdx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:199
    "\tmovq 43368(%rdx), %rax\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:200
    "\tjmp *43376(%rdx)\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:201

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_functionArityCheck__continue)
    "\tmovq -8(%r13), %rdx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:204
    "\tmovq 96(%rdx), %r10\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:205
    "\txorq %rsi, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:206
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_functionForCallBegin) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:207

OFFLINE_ASM_GLUE_LABEL(llint_function_for_construct_arity_check)
    "\tpop %rcx\n"                                           // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:198
    "\tmovq %rcx, -16(%r13)\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:306
    "\tmovq -32(%r13), %rdx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:283
    "\tmovq 24(%rdx), %rdx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:284
    "\tmovq 160(%rdx), %rdx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:285
    "\taddl $5, 576(%rdx)\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:312
    "\tjs " LOCAL_LABEL_STRING(_offlineasm_4_prologue__continue) "\n"
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_entry_osr_function_for_construct_arityCheck) "\n"
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:314
    "\ttestq %rax, %rax\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:315
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_4_prologue__recover) "\n"
    "\tmovq -16(%r13), %rcx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:316
    "\tpush %rcx\n"                                          // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:211
    "\tjmp *%rax\n"                                          // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:318

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_4_prologue__recover)
    "\tmovq -32(%r13), %rdx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:283
    "\tmovq 24(%rdx), %rdx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:284
    "\tmovq 160(%rdx), %rdx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:285

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_4_prologue__continue)
    "\tmovq %rdx, -8(%r13)\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:293
    "\tmovq 96(%rdx), %r10\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:327
    "\txorq %rsi, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:328
    "\tmovl -48(%r13), %eax\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:193
    "\tcmpl 72(%rdx), %eax\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:194
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_functionForConstructBegin) "\n"
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_construct_arityCheck) "\n"
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:197
    "\ttestl %eax, %eax\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:198
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_4_functionArityCheck__continue) "\n"
    "\tmovq 112(%rsp), %rdx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:199
    "\tmovq 43368(%rdx), %rax\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:200
    "\tjmp *43376(%rdx)\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:201

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_4_functionArityCheck__continue)
    "\tmovq -8(%r13), %rdx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:204
    "\tmovq 96(%rdx), %r10\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:205
    "\txorq %rsi, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:206
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_functionForConstructBegin) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:207

OFFLINE_ASM_OPCODE_LABEL(op_enter)
    "\tmovq -8(%r13), %rcx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:215
    "\tmovl 52(%rcx), %ecx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:216
    "\ttestl %ecx, %ecx\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:217
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_opEnterDone) "\n"
    "\tmovq $10, %rax\n"                                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:218

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opEnterLoop)
    "\tsubl $1, %ecx\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:220
    "\tmovq %rax, 0(%r13, %rcx, 8)\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:221
    "\ttestl %ecx, %ecx\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:222
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opEnterLoop) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opEnterDone)
    "\taddq $1, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_create_activation)
    "\tmovslq 8(%r10, %rsi, 8), %rax\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $0, 0(%r13, %rax, 8)\n"                          // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:230
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_opCreateActivationDone) "\n"
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_create_activation) "\n"
    "\tmovq %rax, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opCreateActivationDone)
    "\taddq $2, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_init_lazy_reg)
    "\tmovslq 8(%r10, %rsi, 8), %rax\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq $0, 0(%r13, %rax, 8)\n"                          // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:239
    "\taddq $2, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_create_arguments)
    "\tmovslq 8(%r10, %rsi, 8), %rax\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $0, 0(%r13, %rax, 8)\n"                          // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:246
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_opCreateArgumentsDone) "\n"
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_create_arguments) "\n"
    "\tmovq %rax, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opCreateArgumentsDone)
    "\taddq $2, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_create_this)
    "\tmovslq 16(%r10, %rsi, 8), %rax\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq 0(%r13, %rax, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:255
    "\tmovq 40(%rax), %rdx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:256
    "\tmovq 48(%rax), %rcx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:257
    "\ttestq %rdx, %rdx\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:258
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_opCreateThisSlow) "\n"
    "\tmovq 0(%rdx), %rax\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:392
    "\ttestq %rax, %rax\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:393
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_opCreateThisSlow) "\n"
    "\tmovq 0(%rax), %rbx\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:396
    "\tmovq %rbx, 0(%rdx)\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:397
    "\tmovq %rcx, 0(%rax)\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:400
    "\tmovq $0, 8(%rax)\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:401
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq %rax, 0(%r13, %rdx, 8)\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:261
    "\taddq $4, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opCreateThisSlow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_create_this) "\n"
    "\tmovq %rax, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $4, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_get_callee)
    "\tmovslq 8(%r10, %rsi, 8), %rax\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq 16(%r10, %rsi, 8), %rcx\n"                       // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tmovq -32(%r13), %rdx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:273
    "\tmovq %rdx, 24(%rcx)\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:184
    "\tmovq %rdx, 0(%r13, %rax, 8)\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:275
    "\taddq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_convert_this)
    "\tmovslq 8(%r10, %rsi, 8), %rax\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq 0(%r13, %rax, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:282
    "\ttestq %r15, %rax\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:283
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opConvertThisSlow) "\n"
    "\tmovq 0(%rax), %rax\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:284
    "\tcmpb $17, 92(%rax)\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:285
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_opConvertThisSlow) "\n"
    "\tmovq 16(%r10, %rsi, 8), %rdx\n"                       // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tmovq %rax, 24(%rdx)\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:184
    "\taddq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opConvertThisSlow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_convert_this) "\n"
    "\tmovq %rax, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_new_object)
    "\tmovq 24(%r10, %rsi, 8), %rax\n"                       // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tmovq 0(%rax), %rdx\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:298
    "\tmovq 8(%rax), %rcx\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:299
    "\tmovq 0(%rdx), %rax\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:392
    "\ttestq %rax, %rax\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:393
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_opNewObjectSlow) "\n"
    "\tmovq 0(%rax), %rbx\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:396
    "\tmovq %rbx, 0(%rdx)\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:397
    "\tmovq %rcx, 0(%rax)\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:400
    "\tmovq $0, 8(%rax)\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:401
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq %rax, 0(%r13, %rdx, 8)\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:302
    "\taddq $4, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opNewObjectSlow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_new_object) "\n"
    "\tmovq %rax, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $4, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_mov)
    "\tmovslq 16(%r10, %rsi, 8), %rdx\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 8(%r10, %rsi, 8), %rax\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rdx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:157
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rdx, 8), %rcx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_loadConstantOrVariable__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rcx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161
    "\tmovq 520(%rcx), %rcx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:162
    "\tsubq $1073741824, %rdx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:163
    "\tmovq 0(%rcx, %rdx, 8), %rcx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:164

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_loadConstantOrVariable__done)
    "\tmovq %rcx, 0(%r13, %rax, 8)\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:315
    "\taddq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_not)
    "\tmovslq 16(%r10, %rsi, 8), %rax\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rax\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:157
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_4_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rcx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_4_loadConstantOrVariable__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_4_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rcx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161
    "\tmovq 520(%rcx), %rcx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:162
    "\tsubq $1073741824, %rax\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:163
    "\tmovq 0(%rcx, %rax, 8), %rcx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:164

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_4_loadConstantOrVariable__done)
    "\txorq $6, %rcx\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:324
    "\ttestq $-2, %rcx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:325
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opNotSlow) "\n"
    "\txorq $7, %rcx\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:326
    "\tmovq %rcx, 0(%r13, %rdx, 8)\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:327
    "\taddq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opNotSlow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_not) "\n"
    "\tmovq %rax, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_eq)
    "\tmovslq 24(%r10, %rsi, 8), %rax\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 16(%r10, %rsi, 8), %rcx\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 8(%r10, %rsi, 8), %rbx\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rax\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:157
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_equalityComparison__loadConstantOrVariableInt32__5_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rdx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_equalityComparison__loadConstantOrVariableInt32__5_loadConstantOrVariable__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_equalityComparison__loadConstantOrVariableInt32__5_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161
    "\tmovq 520(%rdx), %rdx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:162
    "\tsubq $1073741824, %rax\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:163
    "\tmovq 0(%rdx, %rax, 8), %rdx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:164

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_equalityComparison__loadConstantOrVariableInt32__5_loadConstantOrVariable__done)
    "\tcmpq %r14, %rdx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:170
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_equalityComparison__slow) "\n"
    "\tcmpq $1073741824, %rcx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:157
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_equalityComparison__loadConstantOrVariableInt32__6_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_equalityComparison__loadConstantOrVariableInt32__6_loadConstantOrVariable__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_equalityComparison__loadConstantOrVariableInt32__6_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161
    "\tmovq 520(%rax), %rax\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:162
    "\tsubq $1073741824, %rcx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:163
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:164

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_equalityComparison__loadConstantOrVariableInt32__6_loadConstantOrVariable__done)
    "\tcmpq %r14, %rax\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:170
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_equalityComparison__slow) "\n"
    "\tcmpl %edx, %eax\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:354
    "\tsete %al\n"
    "\tmovzbl %al, %eax\n"
    "\torq $6, %rax\n"                                       // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:343
    "\tmovq %rax, 0(%r13, %rbx, 8)\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:344
    "\taddq $4, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_equalityComparison__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_eq) "\n"
    "\tmovq %rax, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $4, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_neq)
    "\tmovslq 24(%r10, %rsi, 8), %rax\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 16(%r10, %rsi, 8), %rcx\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 8(%r10, %rsi, 8), %rbx\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rax\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:157
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_equalityComparison__loadConstantOrVariableInt32__7_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rdx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_equalityComparison__loadConstantOrVariableInt32__7_loadConstantOrVariable__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_equalityComparison__loadConstantOrVariableInt32__7_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161
    "\tmovq 520(%rdx), %rdx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:162
    "\tsubq $1073741824, %rax\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:163
    "\tmovq 0(%rdx, %rax, 8), %rdx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:164

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_equalityComparison__loadConstantOrVariableInt32__7_loadConstantOrVariable__done)
    "\tcmpq %r14, %rdx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:170
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_8_equalityComparison__slow) "\n"
    "\tcmpq $1073741824, %rcx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:157
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_equalityComparison__loadConstantOrVariableInt32__8_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_equalityComparison__loadConstantOrVariableInt32__8_loadConstantOrVariable__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_equalityComparison__loadConstantOrVariableInt32__8_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161
    "\tmovq 520(%rax), %rax\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:162
    "\tsubq $1073741824, %rcx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:163
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:164

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_equalityComparison__loadConstantOrVariableInt32__8_loadConstantOrVariable__done)
    "\tcmpq %r14, %rax\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:170
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_8_equalityComparison__slow) "\n"
    "\tcmpl %edx, %eax\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:360
    "\tsetne %al\n"
    "\tmovzbl %al, %eax\n"
    "\torq $6, %rax\n"                                       // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:343
    "\tmovq %rax, 0(%r13, %rbx, 8)\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:344
    "\taddq $4, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_8_equalityComparison__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_neq) "\n"
    "\tmovq %rax, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $4, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_eq_null)
    "\tmovslq 16(%r10, %rsi, 8), %rax\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq 0(%r13, %rax, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:366
    "\ttestq %r15, %rax\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:367
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_equalNullComparison__immediate) "\n"
    "\tmovq 0(%rax), %rcx\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:368
    "\ttestb $1, 93(%rcx)\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:369
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_equalNullComparison__masqueradesAsUndefined) "\n"
    "\txorq %rax, %rax\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:370
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_equalNullComparison__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:371

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_equalNullComparison__masqueradesAsUndefined)
    "\tmovq -8(%r13), %rax\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:373
    "\tmovq 32(%rax), %rax\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:374
    "\tcmpq %rax, 8(%rcx)\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:375
    "\tsete %al\n"
    "\tmovzbl %al, %eax\n"
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_equalNullComparison__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:376

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_equalNullComparison__immediate)
    "\tandq $-9, %rax\n"                                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:378
    "\tcmpq $2, %rax\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:379
    "\tsete %al\n"
    "\tmovzbl %al, %eax\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_equalNullComparison__done)
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\torq $6, %rax\n"                                       // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:387
    "\tmovq %rax, 0(%r13, %rdx, 8)\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:388
    "\taddq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_neq_null)
    "\tmovslq 16(%r10, %rsi, 8), %rax\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq 0(%r13, %rax, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:366
    "\ttestq %r15, %rax\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:367
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_8_equalNullComparison__immediate) "\n"
    "\tmovq 0(%rax), %rcx\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:368
    "\ttestb $1, 93(%rcx)\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:369
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_8_equalNullComparison__masqueradesAsUndefined) "\n"
    "\txorq %rax, %rax\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:370
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_8_equalNullComparison__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:371

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_8_equalNullComparison__masqueradesAsUndefined)
    "\tmovq -8(%r13), %rax\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:373
    "\tmovq 32(%rax), %rax\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:374
    "\tcmpq %rax, 8(%rcx)\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:375
    "\tsete %al\n"
    "\tmovzbl %al, %eax\n"
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_8_equalNullComparison__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:376

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_8_equalNullComparison__immediate)
    "\tandq $-9, %rax\n"                                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:378
    "\tcmpq $2, %rax\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:379
    "\tsete %al\n"
    "\tmovzbl %al, %eax\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_8_equalNullComparison__done)
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\txorq $7, %rax\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:396
    "\tmovq %rax, 0(%r13, %rdx, 8)\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:397
    "\taddq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_stricteq)
    "\tmovslq 24(%r10, %rsi, 8), %rax\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 16(%r10, %rsi, 8), %rcx\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rax\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:157
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_strictEq__9_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rdx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_strictEq__9_loadConstantOrVariable__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_strictEq__9_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161
    "\tmovq 520(%rdx), %rdx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:162
    "\tsubq $1073741824, %rax\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:163
    "\tmovq 0(%rdx, %rax, 8), %rdx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:164

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_strictEq__9_loadConstantOrVariable__done)
    "\tcmpq $1073741824, %rcx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:157
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_strictEq__10_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_strictEq__10_loadConstantOrVariable__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_strictEq__10_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161
    "\tmovq 520(%rax), %rax\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:162
    "\tsubq $1073741824, %rcx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:163
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:164

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_strictEq__10_loadConstantOrVariable__done)
    "\tmovq %rax, %rcx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:407
    "\torq %rdx, %rcx\n"                                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:408
    "\ttestq %r15, %rcx\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:409
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_strictEq__slow) "\n"
    "\tcmpq %r14, %rax\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:410
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_strictEq__leftOK) "\n"
    "\ttestq %r14, %rax\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:411
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_strictEq__slow) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_strictEq__leftOK)
    "\tcmpq %r14, %rdx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:413
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_strictEq__rightOK) "\n"
    "\ttestq %r14, %rdx\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:414
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_strictEq__slow) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_strictEq__rightOK)
    "\tcmpq %rdx, %rax\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:429
    "\tsete %al\n"
    "\tmovzbl %al, %eax\n"
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\torq $6, %rax\n"                                       // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:418
    "\tmovq %rax, 0(%r13, %rdx, 8)\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:419
    "\taddq $4, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_strictEq__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_stricteq) "\n"
    "\tmovq %rax, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $4, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_nstricteq)
    "\tmovslq 24(%r10, %rsi, 8), %rax\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 16(%r10, %rsi, 8), %rcx\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rax\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:157
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_strictEq__11_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rdx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_strictEq__11_loadConstantOrVariable__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_strictEq__11_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161
    "\tmovq 520(%rdx), %rdx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:162
    "\tsubq $1073741824, %rax\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:163
    "\tmovq 0(%rdx, %rax, 8), %rdx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:164

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_strictEq__11_loadConstantOrVariable__done)
    "\tcmpq $1073741824, %rcx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:157
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_strictEq__12_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_strictEq__12_loadConstantOrVariable__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_strictEq__12_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161
    "\tmovq 520(%rax), %rax\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:162
    "\tsubq $1073741824, %rcx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:163
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:164

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_strictEq__12_loadConstantOrVariable__done)
    "\tmovq %rax, %rcx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:407
    "\torq %rdx, %rcx\n"                                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:408
    "\ttestq %r15, %rcx\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:409
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_12_strictEq__slow) "\n"
    "\tcmpq %r14, %rax\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:410
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_12_strictEq__leftOK) "\n"
    "\ttestq %r14, %rax\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:411
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_12_strictEq__slow) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_12_strictEq__leftOK)
    "\tcmpq %r14, %rdx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:413
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_12_strictEq__rightOK) "\n"
    "\ttestq %r14, %rdx\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:414
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_12_strictEq__slow) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_12_strictEq__rightOK)
    "\tcmpq %rdx, %rax\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:435
    "\tsetne %al\n"
    "\tmovzbl %al, %eax\n"
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\torq $6, %rax\n"                                       // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:418
    "\tmovq %rax, 0(%r13, %rdx, 8)\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:419
    "\taddq $4, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_12_strictEq__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_nstricteq) "\n"
    "\tmovq %rax, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $4, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_inc)
    "\tmovslq 8(%r10, %rsi, 8), %rax\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq 0(%r13, %rax, 8), %rdx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:442
    "\tcmpq %r14, %rdx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:443
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_preOp__slow) "\n"
    "\taddl $1, %edx\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:456
    "\tjo " LOCAL_LABEL_STRING(_offlineasm_preOp__slow) "\n"
    "\torq %r14, %rdx\n"                                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:445
    "\tmovq %rdx, 0(%r13, %rax, 8)\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:446
    "\taddq $2, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_preOp__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_pre_inc) "\n"
    "\tmovq %rax, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $2, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_dec)
    "\tmovslq 8(%r10, %rsi, 8), %rax\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq 0(%r13, %rax, 8), %rdx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:442
    "\tcmpq %r14, %rdx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:443
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_12_preOp__slow) "\n"
    "\tsubl $1, %edx\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:462
    "\tjo " LOCAL_LABEL_STRING(_offlineasm_12_preOp__slow) "\n"
    "\torq %r14, %rdx\n"                                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:445
    "\tmovq %rdx, 0(%r13, %rax, 8)\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:446
    "\taddq $2, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_12_preOp__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_pre_dec) "\n"
    "\tmovq %rax, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $2, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_to_number)
    "\tmovslq 16(%r10, %rsi, 8), %rax\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rax\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:157
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_13_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rcx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_13_loadConstantOrVariable__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_13_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rcx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161
    "\tmovq 520(%rcx), %rcx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:162
    "\tsubq $1073741824, %rax\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:163
    "\tmovq 0(%rcx, %rax, 8), %rcx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:164

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_13_loadConstantOrVariable__done)
    "\tcmpq %r14, %rcx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:471
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_opToNumberIsImmediate) "\n"
    "\ttestq %r14, %rcx\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:472
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_opToNumberSlow) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opToNumberIsImmediate)
    "\tmovq %rcx, 0(%r13, %rdx, 8)\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:474
    "\taddq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opToNumberSlow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_to_number) "\n"
    "\tmovq %rax, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_negate)
    "\tmovslq 16(%r10, %rsi, 8), %rax\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rax\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:157
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_14_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rcx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_14_loadConstantOrVariable__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_14_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rcx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161
    "\tmovq 520(%rcx), %rcx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:162
    "\tsubq $1073741824, %rax\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:163
    "\tmovq 0(%rcx, %rax, 8), %rcx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:164

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_14_loadConstantOrVariable__done)
    "\tcmpq %r14, %rcx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:487
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_opNegateNotInt) "\n"
    "\ttestl $2147483647, %ecx\n"                            // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:488
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_opNegateSlow) "\n"
    "\tnegl %ecx\n"                                          // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:489
    "\torq %r14, %rcx\n"                                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:490
    "\tmovq %rcx, 0(%r13, %rdx, 8)\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:491
    "\taddq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opNegateNotInt)
    "\ttestq %r14, %rcx\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:494
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_opNegateSlow) "\n"
    "\tmovq $9223372036854775808, %r11\n"                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:495
    "\txorq %r11, %rcx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:495
    "\tmovq %rcx, 0(%r13, %rdx, 8)\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:496
    "\taddq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opNegateSlow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_negate) "\n"
    "\tmovq %rax, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_add)
    "\tmovslq 24(%r10, %rsi, 8), %rax\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 16(%r10, %rsi, 8), %rcx\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rax\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:157
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_binaryOp__binaryOpCustomStore__15_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rdx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_binaryOp__binaryOpCustomStore__15_loadConstantOrVariable__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOp__binaryOpCustomStore__15_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161
    "\tmovq 520(%rdx), %rdx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:162
    "\tsubq $1073741824, %rax\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:163
    "\tmovq 0(%rdx, %rax, 8), %rdx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:164

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOp__binaryOpCustomStore__15_loadConstantOrVariable__done)
    "\tcmpq $1073741824, %rcx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:157
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_binaryOp__binaryOpCustomStore__16_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_binaryOp__binaryOpCustomStore__16_loadConstantOrVariable__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOp__binaryOpCustomStore__16_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161
    "\tmovq 520(%rax), %rax\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:162
    "\tsubq $1073741824, %rcx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:163
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:164

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOp__binaryOpCustomStore__16_loadConstantOrVariable__done)
    "\tcmpq %r14, %rax\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:509
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_binaryOp__binaryOpCustomStore__op1NotInt) "\n"
    "\tcmpq %r14, %rdx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:510
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_binaryOp__binaryOpCustomStore__op2NotInt) "\n"
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\taddl %edx, %eax\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:566
    "\tjo " LOCAL_LABEL_STRING(_offlineasm_binaryOp__binaryOpCustomStore__slow) "\n"
    "\torq %r14, %rax\n"                                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:557
    "\tmovq %rax, 0(%r13, %rcx, 8)\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:558
    "\taddq $5, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOp__binaryOpCustomStore__op1NotInt)
    "\ttestq %r14, %rax\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:517
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_binaryOp__binaryOpCustomStore__slow) "\n"
    "\tcmpq %r14, %rdx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:518
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_binaryOp__binaryOpCustomStore__op1NotIntOp2Int) "\n"
    "\ttestq %r14, %rdx\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:519
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_binaryOp__binaryOpCustomStore__slow) "\n"
    "\taddq %r14, %rdx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:520
    "\tmovq %rdx, %xmm1\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:521
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_binaryOp__binaryOpCustomStore__op1NotIntReady) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:522

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOp__binaryOpCustomStore__op1NotIntOp2Int)
    "\tcvtsi2sd %edx, %xmm1\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:524

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOp__binaryOpCustomStore__op1NotIntReady)
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\taddq %r14, %rax\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:527
    "\tmovq %rax, %xmm0\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:528
    "\taddsd %xmm1, %xmm0\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:567
    "\tmovq %xmm0, %rax\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:530
    "\tsubq %r14, %rax\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:531
    "\tmovq %rax, 0(%r13, %rcx, 8)\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:532
    "\taddq $5, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOp__binaryOpCustomStore__op2NotInt)
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\ttestq %r14, %rdx\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:538
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_binaryOp__binaryOpCustomStore__slow) "\n"
    "\tcvtsi2sd %eax, %xmm0\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:539
    "\taddq %r14, %rdx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:540
    "\tmovq %rdx, %xmm1\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:541
    "\taddsd %xmm1, %xmm0\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:567
    "\tmovq %xmm0, %rax\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:543
    "\tsubq %r14, %rax\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:544
    "\tmovq %rax, 0(%r13, %rcx, 8)\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:545
    "\taddq $5, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOp__binaryOpCustomStore__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_add) "\n"
    "\tmovq %rax, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $5, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_mul)
    "\tmovslq 24(%r10, %rsi, 8), %rax\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 16(%r10, %rsi, 8), %rcx\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rax\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:157
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_binaryOpCustomStore__17_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rdx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_binaryOpCustomStore__17_loadConstantOrVariable__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOpCustomStore__17_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161
    "\tmovq 520(%rdx), %rdx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:162
    "\tsubq $1073741824, %rax\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:163
    "\tmovq 0(%rdx, %rax, 8), %rdx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:164

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOpCustomStore__17_loadConstantOrVariable__done)
    "\tcmpq $1073741824, %rcx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:157
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_binaryOpCustomStore__18_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_binaryOpCustomStore__18_loadConstantOrVariable__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOpCustomStore__18_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161
    "\tmovq 520(%rax), %rax\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:162
    "\tsubq $1073741824, %rcx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:163
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:164

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOpCustomStore__18_loadConstantOrVariable__done)
    "\tcmpq %r14, %rax\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:509
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_18_binaryOpCustomStore__op1NotInt) "\n"
    "\tcmpq %r14, %rdx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:510
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_18_binaryOpCustomStore__op2NotInt) "\n"
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq %rax, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:576
    "\timull %edx, %ebx\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:577
    "\tjo " LOCAL_LABEL_STRING(_offlineasm_18_binaryOpCustomStore__slow) "\n"
    "\ttestl %ebx, %ebx\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:578
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_binaryOpCustomStore__integerOperationAndStore__done) "\n"
    "\tcmpl $0, %edx\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:579
    "\tjl " LOCAL_LABEL_STRING(_offlineasm_18_binaryOpCustomStore__slow) "\n"
    "\tcmpl $0, %eax\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:580
    "\tjl " LOCAL_LABEL_STRING(_offlineasm_18_binaryOpCustomStore__slow) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOpCustomStore__integerOperationAndStore__done)
    "\torq %r14, %rbx\n"                                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:582
    "\tmovq %rbx, 0(%r13, %rcx, 8)\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:583
    "\taddq $5, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_18_binaryOpCustomStore__op1NotInt)
    "\ttestq %r14, %rax\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:517
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_18_binaryOpCustomStore__slow) "\n"
    "\tcmpq %r14, %rdx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:518
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_18_binaryOpCustomStore__op1NotIntOp2Int) "\n"
    "\ttestq %r14, %rdx\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:519
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_18_binaryOpCustomStore__slow) "\n"
    "\taddq %r14, %rdx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:520
    "\tmovq %rdx, %xmm1\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:521
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_18_binaryOpCustomStore__op1NotIntReady) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:522

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_18_binaryOpCustomStore__op1NotIntOp2Int)
    "\tcvtsi2sd %edx, %xmm1\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:524

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_18_binaryOpCustomStore__op1NotIntReady)
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\taddq %r14, %rax\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:527
    "\tmovq %rax, %xmm0\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:528
    "\tmulsd %xmm1, %xmm0\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:585
    "\tmovq %xmm0, %rax\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:530
    "\tsubq %r14, %rax\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:531
    "\tmovq %rax, 0(%r13, %rcx, 8)\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:532
    "\taddq $5, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_18_binaryOpCustomStore__op2NotInt)
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\ttestq %r14, %rdx\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:538
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_18_binaryOpCustomStore__slow) "\n"
    "\tcvtsi2sd %eax, %xmm0\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:539
    "\taddq %r14, %rdx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:540
    "\tmovq %rdx, %xmm1\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:541
    "\tmulsd %xmm1, %xmm0\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:585
    "\tmovq %xmm0, %rax\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:543
    "\tsubq %r14, %rax\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:544
    "\tmovq %rax, 0(%r13, %rcx, 8)\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:545
    "\taddq $5, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_18_binaryOpCustomStore__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_mul) "\n"
    "\tmovq %rax, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $5, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_sub)
    "\tmovslq 24(%r10, %rsi, 8), %rax\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 16(%r10, %rsi, 8), %rcx\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rax\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:157
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_binaryOp__binaryOpCustomStore__19_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rdx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_binaryOp__binaryOpCustomStore__19_loadConstantOrVariable__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOp__binaryOpCustomStore__19_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161
    "\tmovq 520(%rdx), %rdx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:162
    "\tsubq $1073741824, %rax\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:163
    "\tmovq 0(%rdx, %rax, 8), %rdx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:164

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOp__binaryOpCustomStore__19_loadConstantOrVariable__done)
    "\tcmpq $1073741824, %rcx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:157
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_binaryOp__binaryOpCustomStore__20_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_binaryOp__binaryOpCustomStore__20_loadConstantOrVariable__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOp__binaryOpCustomStore__20_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161
    "\tmovq 520(%rax), %rax\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:162
    "\tsubq $1073741824, %rcx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:163
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:164

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOp__binaryOpCustomStore__20_loadConstantOrVariable__done)
    "\tcmpq %r14, %rax\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:509
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_binaryOp__20_binaryOpCustomStore__op1NotInt) "\n"
    "\tcmpq %r14, %rdx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:510
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_binaryOp__20_binaryOpCustomStore__op2NotInt) "\n"
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tsubl %edx, %eax\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:592
    "\tjo " LOCAL_LABEL_STRING(_offlineasm_binaryOp__20_binaryOpCustomStore__slow) "\n"
    "\torq %r14, %rax\n"                                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:557
    "\tmovq %rax, 0(%r13, %rcx, 8)\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:558
    "\taddq $5, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOp__20_binaryOpCustomStore__op1NotInt)
    "\ttestq %r14, %rax\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:517
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_binaryOp__20_binaryOpCustomStore__slow) "\n"
    "\tcmpq %r14, %rdx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:518
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_binaryOp__20_binaryOpCustomStore__op1NotIntOp2Int) "\n"
    "\ttestq %r14, %rdx\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:519
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_binaryOp__20_binaryOpCustomStore__slow) "\n"
    "\taddq %r14, %rdx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:520
    "\tmovq %rdx, %xmm1\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:521
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_binaryOp__20_binaryOpCustomStore__op1NotIntReady) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:522

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOp__20_binaryOpCustomStore__op1NotIntOp2Int)
    "\tcvtsi2sd %edx, %xmm1\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:524

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOp__20_binaryOpCustomStore__op1NotIntReady)
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\taddq %r14, %rax\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:527
    "\tmovq %rax, %xmm0\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:528
    "\tsubsd %xmm1, %xmm0\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:593
    "\tmovq %xmm0, %rax\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:530
    "\tsubq %r14, %rax\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:531
    "\tmovq %rax, 0(%r13, %rcx, 8)\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:532
    "\taddq $5, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOp__20_binaryOpCustomStore__op2NotInt)
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\ttestq %r14, %rdx\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:538
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_binaryOp__20_binaryOpCustomStore__slow) "\n"
    "\tcvtsi2sd %eax, %xmm0\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:539
    "\taddq %r14, %rdx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:540
    "\tmovq %rdx, %xmm1\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:541
    "\tsubsd %xmm1, %xmm0\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:593
    "\tmovq %xmm0, %rax\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:543
    "\tsubq %r14, %rax\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:544
    "\tmovq %rax, 0(%r13, %rcx, 8)\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:545
    "\taddq $5, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOp__20_binaryOpCustomStore__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_sub) "\n"
    "\tmovq %rax, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $5, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_div)
    "\tmovslq 24(%r10, %rsi, 8), %rax\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 16(%r10, %rsi, 8), %rcx\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rax\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:157
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_binaryOpCustomStore__21_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rdx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_binaryOpCustomStore__21_loadConstantOrVariable__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOpCustomStore__21_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161
    "\tmovq 520(%rdx), %rdx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:162
    "\tsubq $1073741824, %rax\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:163
    "\tmovq 0(%rdx, %rax, 8), %rdx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:164

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOpCustomStore__21_loadConstantOrVariable__done)
    "\tcmpq $1073741824, %rcx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:157
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_binaryOpCustomStore__22_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_binaryOpCustomStore__22_loadConstantOrVariable__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOpCustomStore__22_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161
    "\tmovq 520(%rax), %rax\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:162
    "\tsubq $1073741824, %rcx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:163
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:164

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOpCustomStore__22_loadConstantOrVariable__done)
    "\tcmpq %r14, %rax\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:509
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_22_binaryOpCustomStore__op1NotInt) "\n"
    "\tcmpq %r14, %rdx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:510
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_22_binaryOpCustomStore__op2NotInt) "\n"
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\ttestl %edx, %edx\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:602
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_22_binaryOpCustomStore__slow) "\n"
    "\tcmpl $-1, %edx\n"                                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:603
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_binaryOpCustomStore__integerOperationAndStore__notNeg2TwoThe31DivByNeg1) "\n"
    "\tcmpl $-2147483648, %eax\n"                            // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:604
    "\tje " LOCAL_LABEL_STRING(_offlineasm_22_binaryOpCustomStore__slow) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOpCustomStore__integerOperationAndStore__notNeg2TwoThe31DivByNeg1)
    "\ttestl %eax, %eax\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:606
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_binaryOpCustomStore__integerOperationAndStore__intOK) "\n"
    "\tcmpl $0, %edx\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:607
    "\tjl " LOCAL_LABEL_STRING(_offlineasm_22_binaryOpCustomStore__slow) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOpCustomStore__integerOperationAndStore__intOK)
    "\tmovq %rdx, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:609
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:610
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:611
    "\tcdq\n"
    "\tidivl %ebx\n"                                         // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:612
    "\ttestl %edx, %edx\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:613
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_22_binaryOpCustomStore__slow) "\n"
    "\torq %r14, %rax\n"                                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:614
    "\tmovq %rax, 0(%r13, %rcx, 8)\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:615
    "\taddq $5, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_22_binaryOpCustomStore__op1NotInt)
    "\ttestq %r14, %rax\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:517
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_22_binaryOpCustomStore__slow) "\n"
    "\tcmpq %r14, %rdx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:518
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_22_binaryOpCustomStore__op1NotIntOp2Int) "\n"
    "\ttestq %r14, %rdx\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:519
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_22_binaryOpCustomStore__slow) "\n"
    "\taddq %r14, %rdx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:520
    "\tmovq %rdx, %xmm1\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:521
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_22_binaryOpCustomStore__op1NotIntReady) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:522

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_22_binaryOpCustomStore__op1NotIntOp2Int)
    "\tcvtsi2sd %edx, %xmm1\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:524

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_22_binaryOpCustomStore__op1NotIntReady)
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\taddq %r14, %rax\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:527
    "\tmovq %rax, %xmm0\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:528
    "\tdivsd %xmm1, %xmm0\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:617
    "\tmovq %xmm0, %rax\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:530
    "\tsubq %r14, %rax\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:531
    "\tmovq %rax, 0(%r13, %rcx, 8)\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:532
    "\taddq $5, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_22_binaryOpCustomStore__op2NotInt)
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\ttestq %r14, %rdx\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:538
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_22_binaryOpCustomStore__slow) "\n"
    "\tcvtsi2sd %eax, %xmm0\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:539
    "\taddq %r14, %rdx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:540
    "\tmovq %rdx, %xmm1\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:541
    "\tdivsd %xmm1, %xmm0\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:617
    "\tmovq %xmm0, %rax\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:543
    "\tsubq %r14, %rax\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:544
    "\tmovq %rax, 0(%r13, %rcx, 8)\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:545
    "\taddq $5, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_22_binaryOpCustomStore__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_div) "\n"
    "\tmovq %rax, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $5, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_lshift)
    "\tmovslq 24(%r10, %rsi, 8), %rax\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 16(%r10, %rsi, 8), %rcx\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 8(%r10, %rsi, 8), %rbx\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rax\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:157
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_bitOp__23_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rdx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_bitOp__23_loadConstantOrVariable__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__23_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161
    "\tmovq 520(%rdx), %rdx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:162
    "\tsubq $1073741824, %rax\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:163
    "\tmovq 0(%rdx, %rax, 8), %rdx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:164

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__23_loadConstantOrVariable__done)
    "\tcmpq $1073741824, %rcx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:157
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_bitOp__24_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_bitOp__24_loadConstantOrVariable__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__24_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161
    "\tmovq 520(%rax), %rax\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:162
    "\tsubq $1073741824, %rcx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:163
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:164

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__24_loadConstantOrVariable__done)
    "\tcmpq %r14, %rax\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:627
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_bitOp__slow) "\n"
    "\tcmpq %r14, %rdx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:628
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_bitOp__slow) "\n"
    "\txchgq %rdx, %rcx\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:642
    "\tsall %cl, %eax\n"
    "\txchgq %rdx, %rcx\n"
    "\torq %r14, %rax\n"                                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:630
    "\tmovq %rax, 0(%r13, %rbx, 8)\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:631
    "\taddq $4, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_lshift) "\n"
    "\tmovq %rax, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $4, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_rshift)
    "\tmovslq 24(%r10, %rsi, 8), %rax\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 16(%r10, %rsi, 8), %rcx\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 8(%r10, %rsi, 8), %rbx\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rax\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:157
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_bitOp__25_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rdx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_bitOp__25_loadConstantOrVariable__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__25_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161
    "\tmovq 520(%rdx), %rdx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:162
    "\tsubq $1073741824, %rax\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:163
    "\tmovq 0(%rdx, %rax, 8), %rdx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:164

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__25_loadConstantOrVariable__done)
    "\tcmpq $1073741824, %rcx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:157
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_bitOp__26_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_bitOp__26_loadConstantOrVariable__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__26_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161
    "\tmovq 520(%rax), %rax\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:162
    "\tsubq $1073741824, %rcx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:163
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:164

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__26_loadConstantOrVariable__done)
    "\tcmpq %r14, %rax\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:627
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_26_bitOp__slow) "\n"
    "\tcmpq %r14, %rdx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:628
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_26_bitOp__slow) "\n"
    "\txchgq %rdx, %rcx\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:650
    "\tsarl %cl, %eax\n"
    "\txchgq %rdx, %rcx\n"
    "\torq %r14, %rax\n"                                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:630
    "\tmovq %rax, 0(%r13, %rbx, 8)\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:631
    "\taddq $4, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_26_bitOp__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_rshift) "\n"
    "\tmovq %rax, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $4, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_urshift)
    "\tmovslq 24(%r10, %rsi, 8), %rax\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 16(%r10, %rsi, 8), %rcx\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 8(%r10, %rsi, 8), %rbx\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rax\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:157
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_bitOp__27_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rdx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_bitOp__27_loadConstantOrVariable__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__27_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161
    "\tmovq 520(%rdx), %rdx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:162
    "\tsubq $1073741824, %rax\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:163
    "\tmovq 0(%rdx, %rax, 8), %rdx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:164

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__27_loadConstantOrVariable__done)
    "\tcmpq $1073741824, %rcx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:157
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_bitOp__28_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_bitOp__28_loadConstantOrVariable__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__28_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161
    "\tmovq 520(%rax), %rax\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:162
    "\tsubq $1073741824, %rcx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:163
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:164

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__28_loadConstantOrVariable__done)
    "\tcmpq %r14, %rax\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:627
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_28_bitOp__slow) "\n"
    "\tcmpq %r14, %rdx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:628
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_28_bitOp__slow) "\n"
    "\txchgq %rdx, %rcx\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:659
    "\tshrl %cl, %eax\n"
    "\txchgq %rdx, %rcx\n"
    "\tcmpl $0, %eax\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:660
    "\tjl " LOCAL_LABEL_STRING(_offlineasm_28_bitOp__slow) "\n"
    "\torq %r14, %rax\n"                                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:630
    "\tmovq %rax, 0(%r13, %rbx, 8)\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:631
    "\taddq $4, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_28_bitOp__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_urshift) "\n"
    "\tmovq %rax, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $4, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_bitand)
    "\tmovslq 24(%r10, %rsi, 8), %rax\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 16(%r10, %rsi, 8), %rcx\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 8(%r10, %rsi, 8), %rbx\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rax\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:157
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_bitOp__29_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rdx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_bitOp__29_loadConstantOrVariable__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__29_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161
    "\tmovq 520(%rdx), %rdx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:162
    "\tsubq $1073741824, %rax\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:163
    "\tmovq 0(%rdx, %rax, 8), %rdx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:164

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__29_loadConstantOrVariable__done)
    "\tcmpq $1073741824, %rcx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:157
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_bitOp__30_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_bitOp__30_loadConstantOrVariable__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__30_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161
    "\tmovq 520(%rax), %rax\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:162
    "\tsubq $1073741824, %rcx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:163
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:164

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__30_loadConstantOrVariable__done)
    "\tcmpq %r14, %rax\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:627
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_30_bitOp__slow) "\n"
    "\tcmpq %r14, %rdx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:628
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_30_bitOp__slow) "\n"
    "\tandl %edx, %eax\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:669
    "\torq %r14, %rax\n"                                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:630
    "\tmovq %rax, 0(%r13, %rbx, 8)\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:631
    "\taddq $5, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_30_bitOp__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_bitand) "\n"
    "\tmovq %rax, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $5, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_bitxor)
    "\tmovslq 24(%r10, %rsi, 8), %rax\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 16(%r10, %rsi, 8), %rcx\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 8(%r10, %rsi, 8), %rbx\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rax\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:157
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_bitOp__31_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rdx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_bitOp__31_loadConstantOrVariable__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__31_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161
    "\tmovq 520(%rdx), %rdx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:162
    "\tsubq $1073741824, %rax\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:163
    "\tmovq 0(%rdx, %rax, 8), %rdx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:164

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__31_loadConstantOrVariable__done)
    "\tcmpq $1073741824, %rcx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:157
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_bitOp__32_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_bitOp__32_loadConstantOrVariable__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__32_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161
    "\tmovq 520(%rax), %rax\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:162
    "\tsubq $1073741824, %rcx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:163
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:164

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__32_loadConstantOrVariable__done)
    "\tcmpq %r14, %rax\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:627
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_32_bitOp__slow) "\n"
    "\tcmpq %r14, %rdx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:628
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_32_bitOp__slow) "\n"
    "\txorl %edx, %eax\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:677
    "\torq %r14, %rax\n"                                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:630
    "\tmovq %rax, 0(%r13, %rbx, 8)\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:631
    "\taddq $5, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_32_bitOp__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_bitxor) "\n"
    "\tmovq %rax, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $5, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_bitor)
    "\tmovslq 24(%r10, %rsi, 8), %rax\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 16(%r10, %rsi, 8), %rcx\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 8(%r10, %rsi, 8), %rbx\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rax\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:157
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_bitOp__33_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rdx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_bitOp__33_loadConstantOrVariable__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__33_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161
    "\tmovq 520(%rdx), %rdx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:162
    "\tsubq $1073741824, %rax\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:163
    "\tmovq 0(%rdx, %rax, 8), %rdx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:164

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__33_loadConstantOrVariable__done)
    "\tcmpq $1073741824, %rcx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:157
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_bitOp__34_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_bitOp__34_loadConstantOrVariable__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__34_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161
    "\tmovq 520(%rax), %rax\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:162
    "\tsubq $1073741824, %rcx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:163
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:164

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__34_loadConstantOrVariable__done)
    "\tcmpq %r14, %rax\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:627
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_34_bitOp__slow) "\n"
    "\tcmpq %r14, %rdx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:628
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_34_bitOp__slow) "\n"
    "\torl %edx, %eax\n"                                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:685
    "\torq %r14, %rax\n"                                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:630
    "\tmovq %rax, 0(%r13, %rbx, 8)\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:631
    "\taddq $5, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_34_bitOp__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_bitor) "\n"
    "\tmovq %rax, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $5, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_check_has_instance)
    "\tmovslq 24(%r10, %rsi, 8), %rdx\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rdx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:157
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_loadConstantOrVariableCell__35_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rdx, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_loadConstantOrVariableCell__35_loadConstantOrVariable__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_loadConstantOrVariableCell__35_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161
    "\tmovq 520(%rax), %rax\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:162
    "\tsubq $1073741824, %rdx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:163
    "\tmovq 0(%rax, %rdx, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:164

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_loadConstantOrVariableCell__35_loadConstantOrVariable__done)
    "\ttestq %r15, %rax\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:175
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opCheckHasInstanceSlow) "\n"
    "\tmovq 0(%rax), %rax\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:694
    "\ttestb $8, 93(%rax)\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:695
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_opCheckHasInstanceSlow) "\n"
    "\taddq $5, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opCheckHasInstanceSlow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_check_has_instance) "\n"
    "\tmovq %rax, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"

OFFLINE_ASM_OPCODE_LABEL(op_instanceof)
    "\tmovslq 24(%r10, %rsi, 8), %rax\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 8(%r10, %rsi, 8), %rbx\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rax\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:157
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_loadConstantOrVariableCell__36_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rdx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_loadConstantOrVariableCell__36_loadConstantOrVariable__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_loadConstantOrVariableCell__36_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161
    "\tmovq 520(%rdx), %rdx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:162
    "\tsubq $1073741824, %rax\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:163
    "\tmovq 0(%rdx, %rax, 8), %rdx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:164

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_loadConstantOrVariableCell__36_loadConstantOrVariable__done)
    "\ttestq %r15, %rdx\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:175
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opInstanceofSlow) "\n"
    "\tmovq 0(%rdx), %rcx\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:709
    "\tcmpb $17, 92(%rcx)\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:710
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_opInstanceofSlow) "\n"
    "\tmovslq 16(%r10, %rsi, 8), %rax\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rax\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:157
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_loadConstantOrVariableCell__37_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rcx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_loadConstantOrVariableCell__37_loadConstantOrVariable__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_loadConstantOrVariableCell__37_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rcx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161
    "\tmovq 520(%rcx), %rcx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:162
    "\tsubq $1073741824, %rax\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:163
    "\tmovq 0(%rcx, %rax, 8), %rcx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:164

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_loadConstantOrVariableCell__37_loadConstantOrVariable__done)
    "\ttestq %r15, %rcx\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:175
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opInstanceofSlow) "\n"
    "\tmovq $1, %rax\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:715

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opInstanceofLoop)
    "\tmovq 0(%rcx), %rcx\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:717
    "\tmovq 16(%rcx), %rcx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:718
    "\tcmpq %rdx, %rcx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:719
    "\tje " LOCAL_LABEL_STRING(_offlineasm_opInstanceofDone) "\n"
    "\ttestq %r15, %rcx\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:720
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_opInstanceofLoop) "\n"
    "\txorq %rax, %rax\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:722

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opInstanceofDone)
    "\torq $6, %rax\n"                                       // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:724
    "\tmovq %rax, 0(%r13, %rbx, 8)\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:725
    "\taddq $4, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opInstanceofSlow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_instanceof) "\n"
    "\tmovq %rax, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $4, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_is_undefined)
    "\tmovslq 16(%r10, %rsi, 8), %rdx\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rdx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:157
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_38_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rdx, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_38_loadConstantOrVariable__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_38_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161
    "\tmovq 520(%rax), %rax\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:162
    "\tsubq $1073741824, %rdx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:163
    "\tmovq 0(%rax, %rdx, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:164

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_38_loadConstantOrVariable__done)
    "\ttestq %r15, %rax\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:738
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_opIsUndefinedCell) "\n"
    "\tcmpq $10, %rax\n"                                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:739
    "\tsete %bl\n"
    "\tmovzbl %bl, %ebx\n"
    "\torq $6, %rbx\n"                                       // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:740
    "\tmovq %rbx, 0(%r13, %rcx, 8)\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:741
    "\taddq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opIsUndefinedCell)
    "\tmovq 0(%rax), %rax\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:744
    "\ttestb $1, 93(%rax)\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:745
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_masqueradesAsUndefined) "\n"
    "\tmovq $6, %rdx\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:746
    "\tmovq %rdx, 0(%r13, %rcx, 8)\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:747
    "\taddq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_masqueradesAsUndefined)
    "\tmovq -8(%r13), %rdx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:750
    "\tmovq 32(%rdx), %rdx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:751
    "\tcmpq %rdx, 8(%rax)\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:752
    "\tsete %bl\n"
    "\tmovzbl %bl, %ebx\n"
    "\torq $6, %rbx\n"                                       // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:753
    "\tmovq %rbx, 0(%r13, %rcx, 8)\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:754
    "\taddq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_is_boolean)
    "\tmovslq 16(%r10, %rsi, 8), %rdx\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rdx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:157
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_39_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rdx, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_39_loadConstantOrVariable__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_39_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161
    "\tmovq 520(%rax), %rax\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:162
    "\tsubq $1073741824, %rdx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:163
    "\tmovq 0(%rax, %rdx, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:164

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_39_loadConstantOrVariable__done)
    "\txorq $6, %rax\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:763
    "\ttestq $-2, %rax\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:764
    "\tsetz %al\n"
    "\tmovzbl %al, %eax\n"
    "\torq $6, %rax\n"                                       // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:765
    "\tmovq %rax, 0(%r13, %rcx, 8)\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:766
    "\taddq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_is_number)
    "\tmovslq 16(%r10, %rsi, 8), %rdx\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rdx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:157
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_40_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rdx, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_40_loadConstantOrVariable__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_40_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161
    "\tmovq 520(%rax), %rax\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:162
    "\tsubq $1073741824, %rdx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:163
    "\tmovq 0(%rax, %rdx, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:164

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_40_loadConstantOrVariable__done)
    "\ttestq %r14, %rax\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:775
    "\tsetnz %dl\n"
    "\tmovzbl %dl, %edx\n"
    "\torq $6, %rdx\n"                                       // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:776
    "\tmovq %rdx, 0(%r13, %rcx, 8)\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:777
    "\taddq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_is_string)
    "\tmovslq 16(%r10, %rsi, 8), %rdx\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rdx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:157
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_41_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rdx, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_41_loadConstantOrVariable__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_41_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161
    "\tmovq 520(%rax), %rax\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:162
    "\tsubq $1073741824, %rdx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:163
    "\tmovq 0(%rax, %rdx, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:164

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_41_loadConstantOrVariable__done)
    "\ttestq %r15, %rax\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:786
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opIsStringNotCell) "\n"
    "\tmovq 0(%rax), %rax\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:787
    "\tcmpb $5, 92(%rax)\n"                                  // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:788
    "\tsete %dl\n"
    "\tmovzbl %dl, %edx\n"
    "\torq $6, %rdx\n"                                       // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:789
    "\tmovq %rdx, 0(%r13, %rcx, 8)\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:790
    "\taddq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opIsStringNotCell)
    "\tmovq $6, 0(%r13, %rcx, 8)\n"                          // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:793
    "\taddq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_init_global_const)
    "\tmovslq 16(%r10, %rsi, 8), %rdx\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq 8(%r10, %rsi, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tcmpq $1073741824, %rdx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:157
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_42_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rdx, 8), %rcx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_42_loadConstantOrVariable__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_42_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rcx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161
    "\tmovq 520(%rcx), %rcx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:162
    "\tsubq $1073741824, %rdx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:163
    "\tmovq 0(%rcx, %rdx, 8), %rcx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:164

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_42_loadConstantOrVariable__done)
    "\tmovq %rcx, 0(%rax)\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:822
    "\taddq $5, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_init_global_const_check)
    "\tmovq 24(%r10, %rsi, 8), %rcx\n"                       // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tmovslq 16(%r10, %rsi, 8), %rdx\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq 8(%r10, %rsi, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tcmpb $0, 0(%rcx)\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:831
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opInitGlobalConstCheckSlow) "\n"
    "\tcmpq $1073741824, %rdx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:157
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_43_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rdx, 8), %rcx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_43_loadConstantOrVariable__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_43_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rcx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161
    "\tmovq 520(%rcx), %rcx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:162
    "\tsubq $1073741824, %rdx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:163
    "\tmovq 0(%rcx, %rdx, 8), %rcx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:164

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_43_loadConstantOrVariable__done)
    "\tmovq %rcx, 0(%rax)\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:834
    "\taddq $5, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opInitGlobalConstCheckSlow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_init_global_const_check) "\n"
    "\tmovq %rax, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $5, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_get_by_id)
    "\tmovslq 16(%r10, %rsi, 8), %rax\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq 32(%r10, %rsi, 8), %rdx\n"                       // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tcmpq $1073741824, %rax\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:157
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_getById__loadConstantOrVariableCell__44_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rbx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_getById__loadConstantOrVariableCell__44_loadConstantOrVariable__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_getById__loadConstantOrVariableCell__44_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rbx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161
    "\tmovq 520(%rbx), %rbx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:162
    "\tsubq $1073741824, %rax\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:163
    "\tmovq 0(%rbx, %rax, 8), %rbx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:164

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_getById__loadConstantOrVariableCell__44_loadConstantOrVariable__done)
    "\ttestq %r15, %rbx\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:175
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_getById__opGetByIdSlow) "\n"
    "\tmovslq 40(%r10, %rsi, 8), %rcx\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq %rdx, 0(%rbx)\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:855
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_getById__opGetByIdSlow) "\n"
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq 0(%rbx, %rcx, 1), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:857
    "\tmovq %rax, 0(%r13, %rdx, 8)\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:858
    "\tmovq 64(%r10, %rsi, 8), %rdx\n"                       // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tmovq %rax, 24(%rdx)\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:184
    "\taddq $9, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_getById__opGetByIdSlow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_get_by_id) "\n"
    "\tmovq %rax, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $9, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_get_by_id_out_of_line)
    "\tmovslq 16(%r10, %rsi, 8), %rax\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq 32(%r10, %rsi, 8), %rdx\n"                       // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tcmpq $1073741824, %rax\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:157
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_getById__loadConstantOrVariableCell__45_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rbx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_getById__loadConstantOrVariableCell__45_loadConstantOrVariable__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_getById__loadConstantOrVariableCell__45_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rbx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161
    "\tmovq 520(%rbx), %rbx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:162
    "\tsubq $1073741824, %rax\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:163
    "\tmovq 0(%rbx, %rax, 8), %rbx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:164

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_getById__loadConstantOrVariableCell__45_loadConstantOrVariable__done)
    "\ttestq %r15, %rbx\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:175
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_45_getById__opGetByIdSlow) "\n"
    "\tmovslq 40(%r10, %rsi, 8), %rcx\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq 8(%rbx), %rax\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:950
    "\tcmpq %rdx, 0(%rbx)\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:855
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_45_getById__opGetByIdSlow) "\n"
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq 0(%rax, %rcx, 1), %rbx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:857
    "\tmovq %rbx, 0(%r13, %rdx, 8)\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:858
    "\tmovq 64(%r10, %rsi, 8), %rdx\n"                       // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tmovq %rbx, 24(%rdx)\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:184
    "\taddq $9, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_45_getById__opGetByIdSlow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_get_by_id) "\n"
    "\tmovq %rax, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $9, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_get_array_length)
    "\tmovslq 16(%r10, %rsi, 8), %rax\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq 32(%r10, %rsi, 8), %rdx\n"                       // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tcmpq $1073741824, %rax\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:157
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_loadConstantOrVariableCell__46_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rbx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_loadConstantOrVariableCell__46_loadConstantOrVariable__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_loadConstantOrVariableCell__46_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rbx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161
    "\tmovq 520(%rbx), %rbx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:162
    "\tsubq $1073741824, %rax\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:163
    "\tmovq 0(%rbx, %rax, 8), %rbx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:164

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_loadConstantOrVariableCell__46_loadConstantOrVariable__done)
    "\ttestq %r15, %rbx\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:175
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opGetArrayLengthSlow) "\n"
    "\tmovq 0(%rbx), %rcx\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:882
    "\tmovq %rcx, 8(%rdx)\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:250
    "\tmovzbl 95(%rcx), %ecx\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:252
    "\ttestl $1, %ecx\n"                                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:884
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_opGetArrayLengthSlow) "\n"
    "\ttestl $30, %ecx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:885
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_opGetArrayLengthSlow) "\n"
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq 64(%r10, %rsi, 8), %rcx\n"                       // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tmovq 8(%rbx), %rax\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:888
    "\tmovl -8(%rax), %eax\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:889
    "\tcmpl $0, %eax\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:890
    "\tjl " LOCAL_LABEL_STRING(_offlineasm_opGetArrayLengthSlow) "\n"
    "\torq %r14, %rax\n"                                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:891
    "\tmovq %rax, 24(%rcx)\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:184
    "\tmovq %rax, 0(%r13, %rdx, 8)\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:893
    "\taddq $9, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opGetArrayLengthSlow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_get_by_id) "\n"
    "\tmovq %rax, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $9, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_get_arguments_length)
    "\tmovslq 16(%r10, %rsi, 8), %rax\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $0, 0(%r13, %rax, 8)\n"                          // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:905
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opGetArgumentsLengthSlow) "\n"
    "\tmovl -48(%r13), %ecx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:906
    "\tsubl $1, %ecx\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:907
    "\torq %r14, %rcx\n"                                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:908
    "\tmovq %rcx, 0(%r13, %rdx, 8)\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:909
    "\taddq $4, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opGetArgumentsLengthSlow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_get_arguments_length) "\n"
    "\tmovq %rax, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $4, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_put_by_id)
    "\tmovslq 8(%r10, %rsi, 8), %rbx\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq 32(%r10, %rsi, 8), %rdx\n"                       // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tcmpq $1073741824, %rbx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:157
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_putById__loadConstantOrVariableCell__47_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rbx, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_putById__loadConstantOrVariableCell__47_loadConstantOrVariable__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putById__loadConstantOrVariableCell__47_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161
    "\tmovq 520(%rax), %rax\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:162
    "\tsubq $1073741824, %rbx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:163
    "\tmovq 0(%rax, %rbx, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:164

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putById__loadConstantOrVariableCell__47_loadConstantOrVariable__done)
    "\ttestq %r15, %rax\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:175
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opPutByIdSlow) "\n"
    "\tmovslq 24(%r10, %rsi, 8), %rcx\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq %rdx, 0(%rax)\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:927
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_opPutByIdSlow) "\n"
    "\tmovslq 40(%r10, %rsi, 8), %rdx\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rcx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:157
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_putById__getPropertyStorage__continuation__48_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rbx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_putById__getPropertyStorage__continuation__48_loadConstantOrVariable__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putById__getPropertyStorage__continuation__48_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rbx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161
    "\tmovq 520(%rbx), %rbx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:162
    "\tsubq $1073741824, %rcx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:163
    "\tmovq 0(%rbx, %rcx, 8), %rbx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:164

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putById__getPropertyStorage__continuation__48_loadConstantOrVariable__done)
    "\tmovq %rbx, 0(%rax, %rdx, 1)\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:931
    "\taddq $9, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opPutByIdSlow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_put_by_id) "\n"
    "\tmovq %rax, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $9, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_put_by_id_out_of_line)
    "\tmovslq 8(%r10, %rsi, 8), %rbx\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq 32(%r10, %rsi, 8), %rdx\n"                       // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tcmpq $1073741824, %rbx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:157
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_putById__loadConstantOrVariableCell__49_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rbx, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_putById__loadConstantOrVariableCell__49_loadConstantOrVariable__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putById__loadConstantOrVariableCell__49_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161
    "\tmovq 520(%rax), %rax\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:162
    "\tsubq $1073741824, %rbx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:163
    "\tmovq 0(%rax, %rbx, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:164

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putById__loadConstantOrVariableCell__49_loadConstantOrVariable__done)
    "\ttestq %r15, %rax\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:175
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opPutByIdSlow) "\n"
    "\tmovslq 24(%r10, %rsi, 8), %rcx\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq 8(%rax), %rbx\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:950
    "\tcmpq %rdx, 0(%rax)\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:927
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_opPutByIdSlow) "\n"
    "\tmovslq 40(%r10, %rsi, 8), %rdx\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rcx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:157
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_putById__getPropertyStorage__continuation__50_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_putById__getPropertyStorage__continuation__50_loadConstantOrVariable__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putById__getPropertyStorage__continuation__50_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161
    "\tmovq 520(%rax), %rax\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:162
    "\tsubq $1073741824, %rcx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:163
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:164

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putById__getPropertyStorage__continuation__50_loadConstantOrVariable__done)
    "\tmovq %rax, 0(%rbx, %rdx, 1)\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:931
    "\taddq $9, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_put_by_id_transition_direct)
    "\tmovslq 8(%r10, %rsi, 8), %rbx\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq 32(%r10, %rsi, 8), %rdx\n"                       // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tcmpq $1073741824, %rbx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:157
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_putByIdTransition__loadConstantOrVariableCell__51_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rbx, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_putByIdTransition__loadConstantOrVariableCell__51_loadConstantOrVariable__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putByIdTransition__loadConstantOrVariableCell__51_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161
    "\tmovq 520(%rax), %rax\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:162
    "\tsubq $1073741824, %rbx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:163
    "\tmovq 0(%rax, %rbx, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:164

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putByIdTransition__loadConstantOrVariableCell__51_loadConstantOrVariable__done)
    "\ttestq %r15, %rax\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:175
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opPutByIdSlow) "\n"
    "\tmovslq 24(%r10, %rsi, 8), %rcx\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq %rdx, 0(%rax)\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:954
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_opPutByIdSlow) "\n"
    "\tmovslq 40(%r10, %rsi, 8), %rdx\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tleaq (%rdx, %rax), %rbx\n"                            // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:961
    "\tcmpq $1073741824, %rcx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:157
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_putByIdTransition__getPropertyStorage__continuation__52_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rdx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_putByIdTransition__getPropertyStorage__continuation__52_loadConstantOrVariable__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putByIdTransition__getPropertyStorage__continuation__52_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161
    "\tmovq 520(%rdx), %rdx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:162
    "\tsubq $1073741824, %rcx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:163
    "\tmovq 0(%rdx, %rcx, 8), %rdx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:164

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putByIdTransition__getPropertyStorage__continuation__52_loadConstantOrVariable__done)
    "\tmovq %rdx, 0(%rbx)\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:964
    "\tmovq 48(%r10, %rsi, 8), %rdx\n"                       // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tmovq %rdx, 0(%rax)\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:966
    "\taddq $9, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_put_by_id_transition_direct_out_of_line)
    "\tmovslq 8(%r10, %rsi, 8), %rbx\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq 32(%r10, %rsi, 8), %rdx\n"                       // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tcmpq $1073741824, %rbx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:157
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_putByIdTransition__loadConstantOrVariableCell__53_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rbx, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_putByIdTransition__loadConstantOrVariableCell__53_loadConstantOrVariable__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putByIdTransition__loadConstantOrVariableCell__53_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161
    "\tmovq 520(%rax), %rax\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:162
    "\tsubq $1073741824, %rbx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:163
    "\tmovq 0(%rax, %rbx, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:164

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putByIdTransition__loadConstantOrVariableCell__53_loadConstantOrVariable__done)
    "\ttestq %r15, %rax\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:175
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opPutByIdSlow) "\n"
    "\tmovslq 24(%r10, %rsi, 8), %rcx\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq %rdx, 0(%rax)\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:954
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_opPutByIdSlow) "\n"
    "\tmovslq 40(%r10, %rsi, 8), %rdx\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq 8(%rax), %rbx\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:950
    "\taddq %rdx, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:961
    "\tcmpq $1073741824, %rcx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:157
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_putByIdTransition__getPropertyStorage__continuation__54_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rdx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_putByIdTransition__getPropertyStorage__continuation__54_loadConstantOrVariable__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putByIdTransition__getPropertyStorage__continuation__54_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161
    "\tmovq 520(%rdx), %rdx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:162
    "\tsubq $1073741824, %rcx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:163
    "\tmovq 0(%rdx, %rcx, 8), %rdx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:164

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putByIdTransition__getPropertyStorage__continuation__54_loadConstantOrVariable__done)
    "\tmovq %rdx, 0(%rbx)\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:964
    "\tmovq 48(%r10, %rsi, 8), %rdx\n"                       // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tmovq %rdx, 0(%rax)\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:966
    "\taddq $9, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_put_by_id_transition_normal)
    "\tmovslq 8(%r10, %rsi, 8), %rbx\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq 32(%r10, %rsi, 8), %rdx\n"                       // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tcmpq $1073741824, %rbx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:157
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_putByIdTransition__loadConstantOrVariableCell__55_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rbx, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_putByIdTransition__loadConstantOrVariableCell__55_loadConstantOrVariable__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putByIdTransition__loadConstantOrVariableCell__55_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161
    "\tmovq 520(%rax), %rax\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:162
    "\tsubq $1073741824, %rbx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:163
    "\tmovq 0(%rax, %rbx, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:164

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putByIdTransition__loadConstantOrVariableCell__55_loadConstantOrVariable__done)
    "\ttestq %r15, %rax\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:175
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opPutByIdSlow) "\n"
    "\tmovslq 24(%r10, %rsi, 8), %rcx\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq %rdx, 0(%rax)\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:954
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_opPutByIdSlow) "\n"
    "\tmovq 56(%r10, %rsi, 8), %rbx\n"                       // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tmovq 8(%rbx), %rbx\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:978
    "\tcmpq $2, 16(%rdx)\n"                                  // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:980
    "\tje " LOCAL_LABEL_STRING(_offlineasm_putByIdTransition__additionalChecks__done) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putByIdTransition__additionalChecks__loop)
    "\tmovq 16(%rdx), %rdx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:982
    "\tmovq 0(%rdx), %rdx\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:983
    "\tcmpq 0(%rbx), %rdx\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:984
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_opPutByIdSlow) "\n"
    "\taddq $8, %rbx\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:985
    "\tcmpq $2, 16(%rdx)\n"                                  // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:986
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_putByIdTransition__additionalChecks__loop) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putByIdTransition__additionalChecks__done)
    "\tmovslq 40(%r10, %rsi, 8), %rdx\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tleaq (%rdx, %rax), %rbx\n"                            // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:961
    "\tcmpq $1073741824, %rcx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:157
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_putByIdTransition__getPropertyStorage__continuation__56_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rdx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_putByIdTransition__getPropertyStorage__continuation__56_loadConstantOrVariable__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putByIdTransition__getPropertyStorage__continuation__56_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161
    "\tmovq 520(%rdx), %rdx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:162
    "\tsubq $1073741824, %rcx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:163
    "\tmovq 0(%rdx, %rcx, 8), %rdx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:164

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putByIdTransition__getPropertyStorage__continuation__56_loadConstantOrVariable__done)
    "\tmovq %rdx, 0(%rbx)\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:964
    "\tmovq 48(%r10, %rsi, 8), %rdx\n"                       // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tmovq %rdx, 0(%rax)\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:966
    "\taddq $9, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_put_by_id_transition_normal_out_of_line)
    "\tmovslq 8(%r10, %rsi, 8), %rbx\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq 32(%r10, %rsi, 8), %rdx\n"                       // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tcmpq $1073741824, %rbx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:157
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_putByIdTransition__loadConstantOrVariableCell__57_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rbx, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_putByIdTransition__loadConstantOrVariableCell__57_loadConstantOrVariable__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putByIdTransition__loadConstantOrVariableCell__57_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161
    "\tmovq 520(%rax), %rax\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:162
    "\tsubq $1073741824, %rbx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:163
    "\tmovq 0(%rax, %rbx, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:164

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putByIdTransition__loadConstantOrVariableCell__57_loadConstantOrVariable__done)
    "\ttestq %r15, %rax\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:175
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opPutByIdSlow) "\n"
    "\tmovslq 24(%r10, %rsi, 8), %rcx\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq %rdx, 0(%rax)\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:954
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_opPutByIdSlow) "\n"
    "\tmovq 56(%r10, %rsi, 8), %rbx\n"                       // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tmovq 8(%rbx), %rbx\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:978
    "\tcmpq $2, 16(%rdx)\n"                                  // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:980
    "\tje " LOCAL_LABEL_STRING(_offlineasm_putByIdTransition__57_additionalChecks__done) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putByIdTransition__57_additionalChecks__loop)
    "\tmovq 16(%rdx), %rdx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:982
    "\tmovq 0(%rdx), %rdx\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:983
    "\tcmpq 0(%rbx), %rdx\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:984
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_opPutByIdSlow) "\n"
    "\taddq $8, %rbx\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:985
    "\tcmpq $2, 16(%rdx)\n"                                  // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:986
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_putByIdTransition__57_additionalChecks__loop) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putByIdTransition__57_additionalChecks__done)
    "\tmovslq 40(%r10, %rsi, 8), %rdx\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq 8(%rax), %rbx\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:950
    "\taddq %rdx, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:961
    "\tcmpq $1073741824, %rcx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:157
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_putByIdTransition__getPropertyStorage__continuation__58_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rdx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_putByIdTransition__getPropertyStorage__continuation__58_loadConstantOrVariable__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putByIdTransition__getPropertyStorage__continuation__58_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161
    "\tmovq 520(%rdx), %rdx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:162
    "\tsubq $1073741824, %rcx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:163
    "\tmovq 0(%rdx, %rcx, 8), %rdx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:164

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putByIdTransition__getPropertyStorage__continuation__58_loadConstantOrVariable__done)
    "\tmovq %rdx, 0(%rbx)\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:964
    "\tmovq 48(%r10, %rsi, 8), %rdx\n"                       // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tmovq %rdx, 0(%rax)\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:966
    "\taddq $9, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_get_by_val)
    "\tmovslq 16(%r10, %rsi, 8), %rcx\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rcx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:157
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_loadConstantOrVariableCell__59_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_loadConstantOrVariableCell__59_loadConstantOrVariable__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_loadConstantOrVariableCell__59_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161
    "\tmovq 520(%rax), %rax\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:162
    "\tsubq $1073741824, %rcx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:163
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:164

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_loadConstantOrVariableCell__59_loadConstantOrVariable__done)
    "\ttestq %r15, %rax\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:175
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opGetByValSlow) "\n"
    "\tmovq 0(%rax), %rcx\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1010
    "\tmovq 32(%r10, %rsi, 8), %rbx\n"                       // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tmovq %rcx, 8(%rbx)\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:250
    "\tmovzbl 95(%rcx), %ecx\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:252
    "\tmovslq 24(%r10, %rsi, 8), %rbx\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rbx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:157
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_loadConstantOrVariableInt32__60_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rbx, 8), %rdx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_loadConstantOrVariableInt32__60_loadConstantOrVariable__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_loadConstantOrVariableInt32__60_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161
    "\tmovq 520(%rdx), %rdx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:162
    "\tsubq $1073741824, %rbx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:163
    "\tmovq 0(%rdx, %rbx, 8), %rdx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:164

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_loadConstantOrVariableInt32__60_loadConstantOrVariable__done)
    "\tcmpq %r14, %rdx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:170
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_opGetByValSlow) "\n"
    "\tmovslq %edx, %rdx\n"                                  // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1015
    "\tmovq 8(%rax), %rbx\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1016
    "\tandl $30, %ecx\n"                                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1017
    "\tcmpl $20, %ecx\n"                                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1018
    "\tje " LOCAL_LABEL_STRING(_offlineasm_opGetByValIsContiguous) "\n"
    "\tcmpl $26, %ecx\n"                                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1019
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_opGetByValNotContiguous) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opGetByValIsContiguous)
    "\tcmpl -8(%rbx), %edx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1022
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_opGetByValOutOfBounds) "\n"
    "\tmovslq 8(%r10, %rsi, 8), %rax\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq 0(%rbx, %rdx, 8), %rcx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1024
    "\ttestq %rcx, %rcx\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1025
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_opGetByValOutOfBounds) "\n"
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_opGetByValDone) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1026

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opGetByValNotContiguous)
    "\tcmpl $22, %ecx\n"                                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1029
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_opGetByValNotDouble) "\n"
    "\tcmpl -8(%rbx), %edx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1030
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_opGetByValOutOfBounds) "\n"
    "\tmovslq 8(%r10, %rsi, 8), %rax\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1031
    "\tmovsd 0(%rbx, %rdx, 8), %xmm0\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1032
    "\tucomisd %xmm0, %xmm0\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1033
    "\tjp " LOCAL_LABEL_STRING(_offlineasm_opGetByValOutOfBounds) "\n"
    "\tmovq %xmm0, %rcx\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1034
    "\tsubq %r14, %rcx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1035
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_opGetByValDone) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1036

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opGetByValNotDouble)
    "\tsubl $28, %ecx\n"                                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1039
    "\tcmpl $2, %ecx\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1040
    "\tja " LOCAL_LABEL_STRING(_offlineasm_opGetByValSlow) "\n"
    "\tcmpl -4(%rbx), %edx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1041
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_opGetByValOutOfBounds) "\n"
    "\tmovslq 8(%r10, %rsi, 8), %rax\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq 16(%rbx, %rdx, 8), %rcx\n"                       // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1043
    "\ttestq %rcx, %rcx\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1044
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_opGetByValOutOfBounds) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opGetByValDone)
    "\tmovq %rcx, 0(%r13, %rax, 8)\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1047
    "\tmovq 40(%r10, %rsi, 8), %rax\n"                       // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tmovq %rcx, 24(%rax)\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:184
    "\taddq $6, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opGetByValOutOfBounds)
    "\tmovq 32(%r10, %rsi, 8), %rax\n"                       // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tmovb $1, 25(%rax)\n"                                  // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1055

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opGetByValSlow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_get_by_val) "\n"
    "\tmovq %rax, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $6, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_get_argument_by_val)
    "\tmovslq 16(%r10, %rsi, 8), %rax\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 24(%r10, %rsi, 8), %rdx\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $0, 0(%r13, %rax, 8)\n"                          // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1068
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opGetArgumentByValSlow) "\n"
    "\tcmpq $1073741824, %rdx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:157
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_loadConstantOrVariableInt32__61_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rdx, 8), %rcx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_loadConstantOrVariableInt32__61_loadConstantOrVariable__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_loadConstantOrVariableInt32__61_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rcx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161
    "\tmovq 520(%rcx), %rcx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:162
    "\tsubq $1073741824, %rdx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:163
    "\tmovq 0(%rcx, %rdx, 8), %rcx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:164

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_loadConstantOrVariableInt32__61_loadConstantOrVariable__done)
    "\tcmpq %r14, %rcx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:170
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_opGetArgumentByValSlow) "\n"
    "\taddl $1, %ecx\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1070
    "\tmovl -48(%r13), %edx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1071
    "\tcmpl %edx, %ecx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1072
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_opGetArgumentByValSlow) "\n"
    "\tnegl %ecx\n"                                          // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1073
    "\tmovslq %ecx, %rcx\n"                                  // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1074
    "\tmovslq 8(%r10, %rsi, 8), %rbx\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq 40(%r10, %rsi, 8), %rdx\n"                       // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tmovq -56(%r13, %rcx, 8), %rax\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1077
    "\tmovq %rax, 0(%r13, %rbx, 8)\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1078
    "\tmovq %rax, 24(%rdx)\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:184
    "\taddq $6, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opGetArgumentByValSlow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_get_argument_by_val) "\n"
    "\tmovq %rax, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $6, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_get_by_pname)
    "\tmovslq 24(%r10, %rsi, 8), %rdx\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rdx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:157
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_62_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rdx, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_62_loadConstantOrVariable__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_62_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161
    "\tmovq 520(%rax), %rax\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:162
    "\tsubq $1073741824, %rdx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:163
    "\tmovq 0(%rax, %rdx, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:164

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_62_loadConstantOrVariable__done)
    "\tmovslq 32(%r10, %rsi, 8), %rdx\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq 0(%r13, %rdx, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1093
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_opGetByPnameSlow) "\n"
    "\tmovslq 16(%r10, %rsi, 8), %rcx\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 40(%r10, %rsi, 8), %rbx\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rcx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:157
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_loadConstantOrVariableCell__63_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_loadConstantOrVariableCell__63_loadConstantOrVariable__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_loadConstantOrVariableCell__63_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161
    "\tmovq 520(%rax), %rax\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:162
    "\tsubq $1073741824, %rcx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:163
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:164

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_loadConstantOrVariableCell__63_loadConstantOrVariable__done)
    "\ttestq %r15, %rax\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:175
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opGetByPnameSlow) "\n"
    "\tmovq 0(%r13, %rbx, 8), %rdx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1098
    "\tmovq 0(%rax), %rcx\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1099
    "\tcmpq 8(%rdx), %rcx\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1100
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_opGetByPnameSlow) "\n"
    "\tmovslq 48(%r10, %rsi, 8), %rbx\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovl 0(%r13, %rbx, 8), %ebx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1102
    "\tsubl $1, %ebx\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1103
    "\tcmpl 24(%rdx), %ebx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1104
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_opGetByPnameSlow) "\n"
    "\tcmpl 32(%rdx), %ebx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1105
    "\tjl " LOCAL_LABEL_STRING(_offlineasm_opGetByPnameInlineProperty) "\n"
    "\taddl $100, %ebx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1106
    "\tsubl 32(%rdx), %ebx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1107

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opGetByPnameInlineProperty)
    "\tcmpl $100, %ebx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:805
    "\tjl " LOCAL_LABEL_STRING(_offlineasm_loadPropertyAtVariableOffset__isInline) "\n"
    "\tmovq 8(%rax), %rax\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:806
    "\tnegl %ebx\n"                                          // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:807
    "\tmovslq %ebx, %rbx\n"                                  // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:808
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_loadPropertyAtVariableOffset__ready) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:809

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_loadPropertyAtVariableOffset__isInline)
    "\taddq $-768, %rax\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:811

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_loadPropertyAtVariableOffset__ready)
    "\tmovq 784(%rax, %rbx, 8), %rax\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:813
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq %rax, 0(%r13, %rdx, 8)\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1111
    "\taddq $7, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opGetByPnameSlow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_get_by_pname) "\n"
    "\tmovq %rax, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $7, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_put_by_val)
    "\tmovslq 8(%r10, %rsi, 8), %rax\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rax\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:157
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_loadConstantOrVariableCell__64_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rdx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_loadConstantOrVariableCell__64_loadConstantOrVariable__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_loadConstantOrVariableCell__64_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161
    "\tmovq 520(%rdx), %rdx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:162
    "\tsubq $1073741824, %rax\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:163
    "\tmovq 0(%rdx, %rax, 8), %rdx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:164

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_loadConstantOrVariableCell__64_loadConstantOrVariable__done)
    "\ttestq %r15, %rdx\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:175
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opPutByValSlow) "\n"
    "\tmovq 0(%rdx), %rcx\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1141
    "\tmovq 32(%r10, %rsi, 8), %rbx\n"                       // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tmovq %rcx, 8(%rbx)\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:250
    "\tmovzbl 95(%rcx), %ecx\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:252
    "\tmovslq 16(%r10, %rsi, 8), %rax\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rax\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:157
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_loadConstantOrVariableInt32__65_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rbx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_loadConstantOrVariableInt32__65_loadConstantOrVariable__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_loadConstantOrVariableInt32__65_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rbx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161
    "\tmovq 520(%rbx), %rbx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:162
    "\tsubq $1073741824, %rax\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:163
    "\tmovq 0(%rbx, %rax, 8), %rbx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:164

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_loadConstantOrVariableInt32__65_loadConstantOrVariable__done)
    "\tcmpq %r14, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:170
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_opPutByValSlow) "\n"
    "\tmovslq %ebx, %rbx\n"                                  // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1146
    "\tmovq 8(%rdx), %rax\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1147
    "\tandl $30, %ecx\n"                                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1148
    "\tcmpl $20, %ecx\n"                                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1149
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_opPutByValNotInt32) "\n"
    "\tcmpl -8(%rax), %ebx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1120
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_contiguousPutByVal__outOfBounds) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_contiguousPutByVal__storeResult)
    "\tmovslq 24(%r10, %rsi, 8), %rcx\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rcx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:157
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_contiguousPutByVal__storeCallback__66_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rdx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_contiguousPutByVal__storeCallback__66_loadConstantOrVariable__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_contiguousPutByVal__storeCallback__66_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161
    "\tmovq 520(%rdx), %rdx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:162
    "\tsubq $1073741824, %rcx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:163
    "\tmovq 0(%rdx, %rcx, 8), %rdx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:164

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_contiguousPutByVal__storeCallback__66_loadConstantOrVariable__done)
    "\tcmpq %r14, %rdx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1153
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_opPutByValSlow) "\n"
    "\tmovq %rdx, 0(%rax, %rbx, 8)\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1154
    "\taddq $5, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_contiguousPutByVal__outOfBounds)
    "\tcmpl -4(%rax), %ebx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1127
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_opPutByValOutOfBounds) "\n"
    "\tmovq 32(%r10, %rsi, 8), %rcx\n"                       // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1129
    "\tmovb $1, 24(%rcx)\n"                                  // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1130
    "\tleal 1(%ebx), %ecx\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1132
    "\tmovl %ecx, -8(%rax)\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1133
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_contiguousPutByVal__storeResult) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1134

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opPutByValNotInt32)
    "\tcmpl $22, %ecx\n"                                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1158
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_opPutByValNotDouble) "\n"
    "\tcmpl -8(%rax), %ebx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1120
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_67_contiguousPutByVal__outOfBounds) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_67_contiguousPutByVal__storeResult)
    "\tmovslq 24(%r10, %rsi, 8), %rcx\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rcx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:157
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_contiguousPutByVal__storeCallback__67_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rdx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_contiguousPutByVal__storeCallback__67_loadConstantOrVariable__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_contiguousPutByVal__storeCallback__67_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161
    "\tmovq 520(%rdx), %rdx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:162
    "\tsubq $1073741824, %rcx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:163
    "\tmovq 0(%rdx, %rcx, 8), %rdx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:164

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_contiguousPutByVal__storeCallback__67_loadConstantOrVariable__done)
    "\tcmpq %r14, %rdx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1162
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_contiguousPutByVal__storeCallback__notInt) "\n"
    "\tcvtsi2sd %edx, %xmm0\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1163
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_contiguousPutByVal__storeCallback__ready) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1164

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_contiguousPutByVal__storeCallback__notInt)
    "\taddq %r14, %rdx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1166
    "\tmovq %rdx, %xmm0\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1167
    "\tucomisd %xmm0, %xmm0\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1168
    "\tjp " LOCAL_LABEL_STRING(_offlineasm_opPutByValSlow) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_contiguousPutByVal__storeCallback__ready)
    "\tmovsd %xmm0, 0(%rax, %rbx, 8)\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1170
    "\taddq $5, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_67_contiguousPutByVal__outOfBounds)
    "\tcmpl -4(%rax), %ebx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1127
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_opPutByValOutOfBounds) "\n"
    "\tmovq 32(%r10, %rsi, 8), %rcx\n"                       // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1129
    "\tmovb $1, 24(%rcx)\n"                                  // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1130
    "\tleal 1(%ebx), %ecx\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1132
    "\tmovl %ecx, -8(%rax)\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1133
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_67_contiguousPutByVal__storeResult) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1134

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opPutByValNotDouble)
    "\tcmpl $26, %ecx\n"                                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1174
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_opPutByValNotContiguous) "\n"
    "\tcmpl -8(%rax), %ebx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1120
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_68_contiguousPutByVal__outOfBounds) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_68_contiguousPutByVal__storeResult)
    "\tmovslq 24(%r10, %rsi, 8), %rcx\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rcx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:157
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_contiguousPutByVal__storeCallback__68_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rdx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_contiguousPutByVal__storeCallback__68_loadConstantOrVariable__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_contiguousPutByVal__storeCallback__68_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161
    "\tmovq 520(%rdx), %rdx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:162
    "\tsubq $1073741824, %rcx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:163
    "\tmovq 0(%rdx, %rcx, 8), %rdx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:164

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_contiguousPutByVal__storeCallback__68_loadConstantOrVariable__done)
    "\tmovq %rdx, 0(%rax, %rbx, 8)\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1179
    "\taddq $5, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_68_contiguousPutByVal__outOfBounds)
    "\tcmpl -4(%rax), %ebx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1127
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_opPutByValOutOfBounds) "\n"
    "\tmovq 32(%r10, %rsi, 8), %rcx\n"                       // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1129
    "\tmovb $1, 24(%rcx)\n"                                  // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1130
    "\tleal 1(%ebx), %ecx\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1132
    "\tmovl %ecx, -8(%rax)\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1133
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_68_contiguousPutByVal__storeResult) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1134

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opPutByValNotContiguous)
    "\tcmpl $28, %ecx\n"                                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1183
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_opPutByValSlow) "\n"
    "\tcmpl -4(%rax), %ebx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1184
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_opPutByValOutOfBounds) "\n"
    "\tcmpq $0, 16(%rax, %rbx, 8)\n"                         // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1185
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_opPutByValArrayStorageEmpty) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opPutByValArrayStorageStoreResult)
    "\tmovslq 24(%r10, %rsi, 8), %rcx\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rcx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:157
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_69_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rdx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_69_loadConstantOrVariable__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_69_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161
    "\tmovq 520(%rdx), %rdx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:162
    "\tsubq $1073741824, %rcx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:163
    "\tmovq 0(%rdx, %rcx, 8), %rdx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:164

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_69_loadConstantOrVariable__done)
    "\tmovq %rdx, 16(%rax, %rbx, 8)\n"                       // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1190
    "\taddq $5, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opPutByValArrayStorageEmpty)
    "\tmovq 32(%r10, %rsi, 8), %rdx\n"                       // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tmovb $1, 24(%rdx)\n"                                  // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1196
    "\taddl $1, 12(%rax)\n"                                  // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1198
    "\tcmpl -8(%rax), %ebx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1199
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_opPutByValArrayStorageStoreResult) "\n"
    "\tleal 1(%ebx), %edx\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1200
    "\tmovl %edx, -8(%rax)\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1201
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_opPutByValArrayStorageStoreResult) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1202

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opPutByValOutOfBounds)
    "\tmovq 32(%r10, %rsi, 8), %rax\n"                       // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tmovb $1, 25(%rax)\n"                                  // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1207

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opPutByValSlow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_put_by_val) "\n"
    "\tmovq %rax, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $5, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_jmp)
    "\taddl 8(%r10, %rsi, 8), %esi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:46
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_jeq_null)
    "\tmovslq 8(%r10, %rsi, 8), %rax\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq 0(%r13, %rax, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1239
    "\ttestq %r15, %rax\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1240
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_equalNull__immediate) "\n"
    "\tmovq 0(%rax), %rcx\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1241
    "\ttestb $1, 93(%rcx)\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1258
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_equalNull__cellHandler__notMasqueradesAsUndefined) "\n"
    "\tmovq -8(%r13), %rax\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1259
    "\tmovq 32(%rax), %rax\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1260
    "\tcmpq %rax, 8(%rcx)\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1261
    "\tje " LOCAL_LABEL_STRING(_offlineasm_equalNull__target) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_equalNull__cellHandler__notMasqueradesAsUndefined)
    "\taddq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_equalNull__target)
    "\taddl 16(%r10, %rsi, 8), %esi\n"                       // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:46
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_equalNull__immediate)
    "\tandq $-9, %rax\n"                                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1249
    "\tcmpq $2, %rax\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1264
    "\tje " LOCAL_LABEL_STRING(_offlineasm_equalNull__target) "\n"
    "\taddq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_jneq_null)
    "\tmovslq 8(%r10, %rsi, 8), %rax\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq 0(%r13, %rax, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1239
    "\ttestq %r15, %rax\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1240
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_69_equalNull__immediate) "\n"
    "\tmovq 0(%rax), %rcx\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1241
    "\ttestb $1, 93(%rcx)\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1271
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_69_equalNull__target) "\n"
    "\tmovq -8(%r13), %rax\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1272
    "\tmovq 32(%rax), %rax\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1273
    "\tcmpq %rax, 8(%rcx)\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1274
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_69_equalNull__target) "\n"
    "\taddq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_69_equalNull__target)
    "\taddl 16(%r10, %rsi, 8), %esi\n"                       // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:46
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_69_equalNull__immediate)
    "\tandq $-9, %rax\n"                                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1249
    "\tcmpq $2, %rax\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1276
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_69_equalNull__target) "\n"
    "\taddq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_jneq_ptr)
    "\tmovslq 8(%r10, %rsi, 8), %rax\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 16(%r10, %rsi, 8), %rdx\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq -8(%r13), %rcx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1283
    "\tmovq 32(%rcx), %rcx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1284
    "\tmovq 712(%rcx, %rdx, 8), %rdx\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1285
    "\tcmpq 0(%r13, %rax, 8), %rdx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1286
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_opJneqPtrTarget) "\n"
    "\taddq $4, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opJneqPtrTarget)
    "\taddl 24(%r10, %rsi, 8), %esi\n"                       // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:46
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_switch_imm)
    "\tmovslq 24(%r10, %rsi, 8), %rcx\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 8(%r10, %rsi, 8), %rbx\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rcx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:157
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_70_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rdx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_70_loadConstantOrVariable__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_70_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161
    "\tmovq 520(%rdx), %rdx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:162
    "\tsubq $1073741824, %rcx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:163
    "\tmovq 0(%rdx, %rcx, 8), %rdx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:164

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_70_loadConstantOrVariable__done)
    "\tmovq -8(%r13), %rcx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1340
    "\tmovq 688(%rcx), %rcx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1341
    "\timull $48, %ebx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1342
    "\tmovq 32(%rcx), %rcx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1343
    "\taddq %rbx, %rcx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1344
    "\tcmpq %r14, %rdx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1345
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_opSwitchImmNotInt) "\n"
    "\tsubl 16(%rcx), %edx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1346
    "\tcmpl 12(%rcx), %edx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1347
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_opSwitchImmFallThrough) "\n"
    "\tmovq 0(%rcx), %rbx\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1348
    "\tmovslq 0(%rbx, %rdx, 4), %rdx\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1349
    "\ttestl %edx, %edx\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1350
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_opSwitchImmFallThrough) "\n"
    "\taddq %rdx, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opSwitchImmNotInt)
    "\ttestq %r14, %rdx\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1354
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opSwitchImmSlow) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opSwitchImmFallThrough)
    "\taddl 16(%r10, %rsi, 8), %esi\n"                       // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:46
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opSwitchImmSlow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_switch_imm) "\n"
    "\tmovq %rax, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"

OFFLINE_ASM_OPCODE_LABEL(op_switch_char)
    "\tmovslq 24(%r10, %rsi, 8), %rcx\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 8(%r10, %rsi, 8), %rbx\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rcx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:157
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_71_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rdx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_71_loadConstantOrVariable__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_71_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161
    "\tmovq 520(%rdx), %rdx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:162
    "\tsubq $1073741824, %rcx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:163
    "\tmovq 0(%rdx, %rcx, 8), %rdx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:164

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_71_loadConstantOrVariable__done)
    "\tmovq -8(%r13), %rcx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1368
    "\tmovq 688(%rcx), %rcx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1369
    "\timull $48, %ebx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1370
    "\tmovq 48(%rcx), %rcx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1371
    "\taddq %rbx, %rcx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1372
    "\ttestq %r15, %rdx\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1373
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opSwitchCharFallThrough) "\n"
    "\tmovq 0(%rdx), %rax\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1374
    "\tcmpb $5, 92(%rax)\n"                                  // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1375
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_opSwitchCharFallThrough) "\n"
    "\tcmpl $1, 12(%rdx)\n"                                  // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1376
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_opSwitchCharFallThrough) "\n"
    "\tmovq 16(%rdx), %rax\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1377
    "\ttestq %rax, %rax\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1378
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_opSwitchOnRope) "\n"
    "\tmovq 8(%rax), %rdx\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1379
    "\ttestl $64, 24(%rax)\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1380
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opSwitchChar8Bit) "\n"
    "\tmovzwl 0(%rdx), %eax\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1381
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_opSwitchCharReady) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1382

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opSwitchChar8Bit)
    "\tmovzbl 0(%rdx), %eax\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1384

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opSwitchCharReady)
    "\tsubl 16(%rcx), %eax\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1386
    "\tcmpl 12(%rcx), %eax\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1387
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_opSwitchCharFallThrough) "\n"
    "\tmovq 0(%rcx), %rcx\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1388
    "\tmovslq 0(%rcx, %rax, 4), %rdx\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1389
    "\ttestl %edx, %edx\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1390
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_opSwitchCharFallThrough) "\n"
    "\taddq %rdx, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opSwitchCharFallThrough)
    "\taddl 16(%r10, %rsi, 8), %esi\n"                       // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:46
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opSwitchOnRope)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_switch_char) "\n"
    "\tmovq %rax, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"

OFFLINE_ASM_OPCODE_LABEL(op_new_func)
    "\tmovslq 24(%r10, %rsi, 8), %rcx\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\ttestl %ecx, %ecx\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1404
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_opNewFuncUnchecked) "\n"
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $0, 0(%r13, %rdx, 8)\n"                          // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1406
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opNewFuncDone) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opNewFuncUnchecked)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_new_func) "\n"
    "\tmovq %rax, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opNewFuncDone)
    "\taddq $4, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_tear_off_activation)
    "\tmovslq 8(%r10, %rsi, 8), %rax\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $0, 0(%r13, %rax, 8)\n"                          // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1453
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_opTearOffActivationNotCreated) "\n"
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_tear_off_activation) "\n"
    "\tmovq %rax, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opTearOffActivationNotCreated)
    "\taddq $2, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_tear_off_arguments)
    "\tmovslq 8(%r10, %rsi, 8), %rax\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tsubl $1, %eax\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1462
    "\tcmpq $0, 0(%r13, %rax, 8)\n"                          // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1463
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_opTearOffArgumentsNotCreated) "\n"
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_tear_off_arguments) "\n"
    "\tmovq %rax, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opTearOffArgumentsNotCreated)
    "\taddq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_ret)
    "\tmovq -8(%r13), %rax\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:257
    "\taddl $10, 576(%rax)\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:258
    "\tjs " LOCAL_LABEL_STRING(_offlineasm_checkSwitchToJITForEpilogue__checkSwitchToJIT__continue) "\n"
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_replace) "\n"
    "\tmovq %rax, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_checkSwitchToJITForEpilogue__checkSwitchToJIT__continue)
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rcx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:157
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_72_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_72_loadConstantOrVariable__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_72_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161
    "\tmovq 520(%rax), %rax\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:162
    "\tsubq $1073741824, %rcx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:163
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:164

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_72_loadConstantOrVariable__done)
    "\tmovq -16(%r13), %rcx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:406
    "\tmovq -40(%r13), %r13\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:407
    "\tpush %rcx\n"                                          // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:211
    "\tret\n"                                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:409

OFFLINE_ASM_OPCODE_LABEL(op_call_put_result)
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq 16(%r10, %rsi, 8), %rbx\n"                       // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tmovq %rax, 0(%r13, %rcx, 8)\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1480
    "\tmovq %rax, 24(%rbx)\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:184
    "\taddq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_ret_object_or_this)
    "\tmovq -8(%r13), %rax\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:257
    "\taddl $10, 576(%rax)\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:258
    "\tjs " LOCAL_LABEL_STRING(_offlineasm_checkSwitchToJITForEpilogue__72_checkSwitchToJIT__continue) "\n"
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_replace) "\n"
    "\tmovq %rax, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_checkSwitchToJITForEpilogue__72_checkSwitchToJIT__continue)
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rcx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:157
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_73_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_73_loadConstantOrVariable__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_73_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161
    "\tmovq 520(%rax), %rax\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:162
    "\tsubq $1073741824, %rcx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:163
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:164

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_73_loadConstantOrVariable__done)
    "\ttestq %r15, %rax\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1491
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opRetObjectOrThisNotObject) "\n"
    "\tmovq 0(%rax), %rcx\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1492
    "\tcmpb $17, 92(%rcx)\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1493
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_opRetObjectOrThisNotObject) "\n"
    "\tmovq -16(%r13), %rcx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:406
    "\tmovq -40(%r13), %r13\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:407
    "\tpush %rcx\n"                                          // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:211
    "\tret\n"                                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:409

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opRetObjectOrThisNotObject)
    "\tmovslq 16(%r10, %rsi, 8), %rcx\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rcx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:157
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_74_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_74_loadConstantOrVariable__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_74_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161
    "\tmovq 520(%rax), %rax\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:162
    "\tsubq $1073741824, %rcx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:163
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:164

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_74_loadConstantOrVariable__done)
    "\tmovq -16(%r13), %rcx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:406
    "\tmovq -40(%r13), %r13\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:407
    "\tpush %rcx\n"                                          // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:211
    "\tret\n"                                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:409

OFFLINE_ASM_OPCODE_LABEL(op_to_primitive)
    "\tmovslq 16(%r10, %rsi, 8), %rcx\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 8(%r10, %rsi, 8), %rbx\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rcx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:157
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_75_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_75_loadConstantOrVariable__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_75_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161
    "\tmovq 520(%rax), %rax\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:162
    "\tsubq $1073741824, %rcx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:163
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:164

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_75_loadConstantOrVariable__done)
    "\ttestq %r15, %rax\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1507
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opToPrimitiveIsImm) "\n"
    "\tmovq 0(%rax), %rcx\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1508
    "\tcmpb $5, 92(%rcx)\n"                                  // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1509
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_opToPrimitiveSlowCase) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opToPrimitiveIsImm)
    "\tmovq %rax, 0(%r13, %rbx, 8)\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1511
    "\taddq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opToPrimitiveSlowCase)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_to_primitive) "\n"
    "\tmovq %rax, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_next_pname)
    "\tmovslq 24(%r10, %rsi, 8), %rdx\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 32(%r10, %rsi, 8), %rcx\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovl 0(%r13, %rdx, 8), %eax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1525
    "\tcmpl 0(%r13, %rcx, 8), %eax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1526
    "\tje " LOCAL_LABEL_STRING(_offlineasm_opNextPnameEnd) "\n"
    "\tmovslq 40(%r10, %rsi, 8), %rcx\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq 0(%r13, %rcx, 8), %rcx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1529
    "\tmovq 40(%rcx), %rbx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1530
    "\tmovq 0(%rbx, %rax, 8), %rbx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1531
    "\taddl $1, %eax\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1532
    "\tmovl %eax, 0(%r13, %rdx, 8)\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1533
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq %rbx, 0(%r13, %rdx, 8)\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1535
    "\tmovslq 16(%r10, %rsi, 8), %rbx\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq 0(%r13, %rbx, 8), %rbx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1538
    "\tmovq 0(%rbx), %rdx\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1539
    "\tcmpq 8(%rcx), %rdx\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1540
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_opNextPnameSlow) "\n"
    "\tmovq 16(%rcx), %rax\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1541
    "\tmovq 8(%rax), %rax\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1542
    "\tcmpq $0, 0(%rax)\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1543
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_opNextPnameTarget) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opNextPnameCheckPrototypeLoop)
    "\tcmpq $2, 16(%rdx)\n"                                  // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1545
    "\tje " LOCAL_LABEL_STRING(_offlineasm_opNextPnameSlow) "\n"
    "\tmovq 16(%rdx), %rcx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1546
    "\tmovq 0(%rcx), %rdx\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1547
    "\tcmpq 0(%rax), %rdx\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1548
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_opNextPnameSlow) "\n"
    "\taddq $8, %rax\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1549
    "\tcmpq $0, 0(%rax)\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1550
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opNextPnameCheckPrototypeLoop) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opNextPnameTarget)
    "\taddl 48(%r10, %rsi, 8), %esi\n"                       // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:46
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opNextPnameEnd)
    "\taddq $7, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opNextPnameSlow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_next_pname) "\n"
    "\tmovq %rax, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"

OFFLINE_ASM_OPCODE_LABEL(op_catch)
    "\tmovq %rax, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1569
    "\tmovq -8(%r13), %r10\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1570
    "\tmovq 96(%r10), %r10\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1571
    "\tmovq 112(%rsp), %rbx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1572
    "\tmovq 43384(%rbx), %rsi\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1573
    "\tsubq %r10, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1574
    "\tsarq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1575
    "\tmovq 43328(%rbx), %rax\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1576
    "\tmovq $0, 43328(%rbx)\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1577
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq %rax, 0(%r13, %rcx, 8)\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1579
    "\taddq $2, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_end)
    "\tmovq -8(%r13), %rax\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:257
    "\taddl $10, 576(%rax)\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:258
    "\tjs " LOCAL_LABEL_STRING(_offlineasm_checkSwitchToJITForEpilogue__75_checkSwitchToJIT__continue) "\n"
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_replace) "\n"
    "\tmovq %rax, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_checkSwitchToJITForEpilogue__75_checkSwitchToJIT__continue)
    "\tmovslq 8(%r10, %rsi, 8), %rax\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq 0(%r13, %rax, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1589
    "\tmovq -16(%r13), %rcx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:406
    "\tmovq -40(%r13), %r13\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:407
    "\tpush %rcx\n"                                          // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:211
    "\tret\n"                                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:409

OFFLINE_ASM_GLUE_LABEL(llint_throw_from_slow_path_trampoline)
    "\tmovq 112(%rsp), %rdx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1597
    "\tmovq 43368(%rdx), %rax\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1598
    "\tjmp *43376(%rdx)\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1599

OFFLINE_ASM_GLUE_LABEL(llint_throw_during_call_trampoline)
    "\tpop %rcx\n"                                           // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:198
    "\tmovq 112(%rsp), %rdx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1604
    "\tmovq 43368(%rdx), %rax\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1605
    "\tjmp *43376(%rdx)\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1606

OFFLINE_ASM_OPCODE_LABEL(op_get_scoped_var)
    "\tmovq -24(%r13), %rax\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1613
    "\tmovslq 24(%r10, %rsi, 8), %rcx\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1614
    "\ttestl %ecx, %ecx\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1616
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_getDeBruijnScope__done) "\n"
    "\tmovq -8(%r13), %rdx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1618
    "\tcmpl $2, 136(%rdx)\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1619
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_getDeBruijnScope__loop) "\n"
    "\tcmpb $0, 117(%rdx)\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1620
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_getDeBruijnScope__loop) "\n"
    "\tmovslq 112(%rdx), %rdx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1622
    "\tcmpq $0, 0(%r13, %rdx, 8)\n"                          // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1625
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_getDeBruijnScope__noActivation) "\n"
    "\tmovq 16(%rax), %rax\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1627

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_getDeBruijnScope__noActivation)
    "\tsubl $1, %ecx\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1629
    "\ttestl %ecx, %ecx\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1631
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_getDeBruijnScope__done) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_getDeBruijnScope__loop)
    "\tmovq 16(%rax), %rax\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1634
    "\tsubl $1, %ecx\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1635
    "\ttestl %ecx, %ecx\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1636
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_getDeBruijnScope__loop) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_getDeBruijnScope__done)
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 16(%r10, %rsi, 8), %rcx\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq 32(%rax), %rax\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1651
    "\tmovq 0(%rax, %rcx, 8), %rbx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1652
    "\tmovq %rbx, 0(%r13, %rdx, 8)\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1653
    "\tmovq 32(%r10, %rsi, 8), %rdx\n"                       // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1654
    "\tmovq %rbx, 24(%rdx)\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:184
    "\taddq $5, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_put_scoped_var)
    "\tmovq -24(%r13), %rax\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1613
    "\tmovslq 16(%r10, %rsi, 8), %rcx\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1614
    "\ttestl %ecx, %ecx\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1616
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_75_getDeBruijnScope__done) "\n"
    "\tmovq -8(%r13), %rdx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1618
    "\tcmpl $2, 136(%rdx)\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1619
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_75_getDeBruijnScope__loop) "\n"
    "\tcmpb $0, 117(%rdx)\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1620
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_75_getDeBruijnScope__loop) "\n"
    "\tmovslq 112(%rdx), %rdx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1622
    "\tcmpq $0, 0(%r13, %rdx, 8)\n"                          // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1625
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_75_getDeBruijnScope__noActivation) "\n"
    "\tmovq 16(%rax), %rax\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1627

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_75_getDeBruijnScope__noActivation)
    "\tsubl $1, %ecx\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1629
    "\ttestl %ecx, %ecx\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1631
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_75_getDeBruijnScope__done) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_75_getDeBruijnScope__loop)
    "\tmovq 16(%rax), %rax\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1634
    "\tsubl $1, %ecx\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1635
    "\ttestl %ecx, %ecx\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1636
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_75_getDeBruijnScope__loop) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_75_getDeBruijnScope__done)
    "\tmovslq 24(%r10, %rsi, 8), %rdx\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1662
    "\tcmpq $1073741824, %rdx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:157
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_76_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rdx, 8), %rbx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_76_loadConstantOrVariable__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_76_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rbx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161
    "\tmovq 520(%rbx), %rbx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:162
    "\tsubq $1073741824, %rdx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:163
    "\tmovq 0(%rbx, %rdx, 8), %rbx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:164

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_76_loadConstantOrVariable__done)
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1664
    "\tmovq 32(%rax), %rax\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1666
    "\tmovq %rbx, 0(%rax, %rdx, 8)\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1667
    "\taddq $4, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_new_array)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_new_array) "\n"
    "\tmovq %rax, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $5, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_new_array_with_size)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_new_array_with_size) "\n"
    "\tmovq %rax, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $4, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_new_array_buffer)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_new_array_buffer) "\n"
    "\tmovq %rax, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $5, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_new_regexp)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_new_regexp) "\n"
    "\tmovq %rax, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_less)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_less) "\n"
    "\tmovq %rax, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $4, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_lesseq)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_lesseq) "\n"
    "\tmovq %rax, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $4, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_greater)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_greater) "\n"
    "\tmovq %rax, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $4, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_greatereq)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_greatereq) "\n"
    "\tmovq %rax, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $4, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_mod)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_mod) "\n"
    "\tmovq %rax, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $4, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_typeof)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_typeof) "\n"
    "\tmovq %rax, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_is_object)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_is_object) "\n"
    "\tmovq %rax, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_is_function)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_is_function) "\n"
    "\tmovq %rax, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_in)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_in) "\n"
    "\tmovq %rax, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $4, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_put_to_base_variable)
    "\tmovq 32(%r10, %rsi, 8), %rax\n"                       // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tmovslq 24(%rax), %rax\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:570
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq 0(%r13, %rdx, 8), %rdx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:555
    "\tmovq 32(%rdx), %rdx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:556
    "\tmovslq 24(%r10, %rsi, 8), %rcx\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rcx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:157
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_putToBaseVariableBody__77_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rbx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_putToBaseVariableBody__77_loadConstantOrVariable__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putToBaseVariableBody__77_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rbx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161
    "\tmovq 520(%rbx), %rbx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:162
    "\tsubq $1073741824, %rcx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:163
    "\tmovq 0(%rbx, %rcx, 8), %rbx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:164

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putToBaseVariableBody__77_loadConstantOrVariable__done)
    "\tmovq %rbx, 0(%rdx, %rax, 8)\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:544
    "\taddq $5, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_put_to_base)
    "\tmovq 32(%r10, %rsi, 8), %rax\n"                       // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tleaq 0(%rax), %rax\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:578
    "\tcmpb $6, 0(%rax)\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:579
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_getPutToBaseOperationField__fieldGetter__notPutToBaseVariable) "\n"
    "\tmovslq 24(%rax), %rax\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:580
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq 0(%r13, %rdx, 8), %rdx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:555
    "\tmovq 32(%rdx), %rdx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:556
    "\tmovslq 24(%r10, %rsi, 8), %rcx\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rcx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:157
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_getPutToBaseOperationField__fieldGetter__putToBaseVariableBody__78_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rbx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_getPutToBaseOperationField__fieldGetter__putToBaseVariableBody__78_loadConstantOrVariable__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_getPutToBaseOperationField__fieldGetter__putToBaseVariableBody__78_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rbx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161
    "\tmovq 520(%rbx), %rbx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:162
    "\tsubq $1073741824, %rcx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:163
    "\tmovq 0(%rbx, %rcx, 8), %rbx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:164

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_getPutToBaseOperationField__fieldGetter__putToBaseVariableBody__78_loadConstantOrVariable__done)
    "\tmovq %rbx, 0(%rdx, %rax, 8)\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:544
    "\taddq $5, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_getPutToBaseOperationField__fieldGetter__notPutToBaseVariable)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_put_to_base) "\n"
    "\tmovq %rax, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $5, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_resolve_global_property)
    "\tmovq 24(%r10, %rsi, 8), %rax\n"                       // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tmovq 0(%rax), %rax\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:590
    "\tmovq -8(%r13), %rdx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:654
    "\tmovq 32(%rdx), %rdx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:655
    "\tmovq 8(%rax), %rcx\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:656
    "\tcmpq %rcx, 0(%rdx)\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:657
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_llint_op_resolve_local) "\n"
    "\tmovslq 16(%rax), %rax\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:658
    "\tnegq %rax\n"                                          // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:799
    "\tmovq 8(%rdx), %rdx\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:800
    "\tmovq 784(%rdx, %rax, 8), %rcx\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:801
    "\tmovslq 8(%r10, %rsi, 8), %rax\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq %rcx, 0(%r13, %rax, 8)\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:639
    "\tmovq 32(%r10, %rsi, 8), %rax\n"                       // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tmovq %rcx, 24(%rax)\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:184
    "\taddq $5, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_resolve_global_var)
    "\tmovq 24(%r10, %rsi, 8), %rax\n"                       // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tmovq 0(%rax), %rax\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:590
    "\tmovq 16(%rax), %rax\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:673
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq 0(%rax), %rbx\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:624
    "\tmovq %rbx, 0(%r13, %rdx, 8)\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:625
    "\tmovq 32(%r10, %rsi, 8), %rdx\n"                       // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tmovq %rbx, 24(%rdx)\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:184
    "\taddq $5, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_resolve_scoped_var)
    "\tmovq 24(%r10, %rsi, 8), %rax\n"                       // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tmovq 0(%rax), %rax\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:590
    "\tmovq -24(%r13), %rdx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:681
    "\tmovl 16(%rax), %ecx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:595
    "\ttestl %ecx, %ecx\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:597
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_resolveScopedVarBody__getScope__done) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_resolveScopedVarBody__getScope__loop)
    "\tmovq 16(%rdx), %rdx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:599
    "\tsubl $1, %ecx\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:600
    "\ttestl %ecx, %ecx\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:601
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_resolveScopedVarBody__getScope__loop) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_resolveScopedVarBody__getScope__done)
    "\tmovq 32(%rdx), %rdx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:684
    "\tmovslq 40(%rax), %rcx\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:687
    "\tmovslq 8(%r10, %rsi, 8), %rbx\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq 0(%rdx, %rcx, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:608
    "\tmovq %rax, 0(%r13, %rbx, 8)\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:609
    "\tmovq 32(%r10, %rsi, 8), %rbx\n"                       // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tmovq %rax, 24(%rbx)\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:184
    "\taddq $5, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_resolve_scoped_var_on_top_scope)
    "\tmovq 24(%r10, %rsi, 8), %rax\n"                       // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tmovq 0(%rax), %rax\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:590
    "\tmovslq 8(%r10, %rsi, 8), %rbx\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq -24(%r13), %rdx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:706
    "\tmovq 32(%rdx), %rdx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:707
    "\tmovslq 40(%rax), %rcx\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:710
    "\tmovq 0(%rdx, %rcx, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:608
    "\tmovq %rax, 0(%r13, %rbx, 8)\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:609
    "\tmovq 32(%r10, %rsi, 8), %rbx\n"                       // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tmovq %rax, 24(%rbx)\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:184
    "\taddq $5, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_resolve_scoped_var_with_top_scope_check)
    "\tmovq 24(%r10, %rsi, 8), %rax\n"                       // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tmovq 0(%rax), %rax\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:590
    "\tmovslq 16(%rax), %rdx\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:719
    "\tmovq 0(%r13, %rdx, 8), %rdx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:721
    "\ttestq %rdx, %rdx\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:724
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_getScope__loadInitialScope__scopeChainNotCreated) "\n"
    "\tmovq 16(%rdx), %rdx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:725
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_getScope__loadInitialScope__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:726

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_getScope__loadInitialScope__scopeChainNotCreated)
    "\tmovq -24(%r13), %rdx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:728

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_getScope__loadInitialScope__done)
    "\tmovl 40(%rax), %ecx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:595
    "\ttestl %ecx, %ecx\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:597
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_78_getScope__done) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_78_getScope__loop)
    "\tmovq 16(%rdx), %rdx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:599
    "\tsubl $1, %ecx\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:600
    "\ttestl %ecx, %ecx\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:601
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_78_getScope__loop) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_78_getScope__done)
    "\tmovq 32(%rdx), %rdx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:733
    "\tmovslq 64(%rax), %rcx\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:736
    "\tmovslq 8(%r10, %rsi, 8), %rbx\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq 0(%rdx, %rcx, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:608
    "\tmovq %rax, 0(%r13, %rbx, 8)\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:609
    "\tmovq 32(%r10, %rsi, 8), %rbx\n"                       // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tmovq %rax, 24(%rbx)\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:184
    "\taddq $5, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_resolve)

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_llint_op_resolve_local)
    "\tmovq 24(%r10, %rsi, 8), %rax\n"                       // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tmovq 0(%rax), %rax\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:590
    "\ttestq %rax, %rax\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:745
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_noInstructions) "\n"
    "\tmovslq 0(%rax), %rdx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:746
    "\tcmpl $9, %edx\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:747
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_notSkipScopes) "\n"
    "\tmovq -24(%r13), %rdx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:681
    "\tmovl 16(%rax), %ecx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:595
    "\ttestl %ecx, %ecx\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:597
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_resolveScopedVarBody__79_getScope__done) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_resolveScopedVarBody__79_getScope__loop)
    "\tmovq 16(%rdx), %rdx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:599
    "\tsubl $1, %ecx\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:600
    "\ttestl %ecx, %ecx\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:601
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_resolveScopedVarBody__79_getScope__loop) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_resolveScopedVarBody__79_getScope__done)
    "\tmovq 32(%rdx), %rdx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:684
    "\tmovslq 40(%rax), %rcx\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:687
    "\tmovslq 8(%r10, %rsi, 8), %rbx\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq 0(%rdx, %rcx, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:608
    "\tmovq %rax, 0(%r13, %rbx, 8)\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:609
    "\tmovq 32(%r10, %rsi, 8), %rbx\n"                       // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tmovq %rax, 24(%rbx)\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:184
    "\taddq $5, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_notSkipScopes)
    "\tcmpl $6, %edx\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:751
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_notGetAndReturnGlobalVar) "\n"
    "\tmovq 16(%rax), %rax\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:752
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq 0(%rax), %rbx\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:624
    "\tmovq %rbx, 0(%r13, %rdx, 8)\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:625
    "\tmovq 32(%r10, %rsi, 8), %rdx\n"                       // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tmovq %rbx, 24(%rdx)\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:184
    "\taddq $5, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_notGetAndReturnGlobalVar)

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_noInstructions)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_resolve) "\n"
    "\tmovq %rax, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $5, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_resolve_base_to_global)
    "\tmovq -8(%r13), %rdx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:764
    "\tmovq 32(%rdx), %rdx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:765
    "\tmovslq 8(%r10, %rsi, 8), %rbx\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq %rdx, 0(%r13, %rbx, 8)\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:639
    "\tmovq 48(%r10, %rsi, 8), %rbx\n"                       // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tmovq %rdx, 24(%rbx)\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:184
    "\taddq $7, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_resolve_base_to_global_dynamic)
    "\tjmp " LOCAL_REFERENCE(llint_op_resolve_base) "\n"     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:776

OFFLINE_ASM_OPCODE_LABEL(op_resolve_base_to_scope)
    "\tmovq 32(%r10, %rsi, 8), %rax\n"                       // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tmovq 0(%rax), %rax\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:590
    "\tmovq -24(%r13), %rdx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:783
    "\tmovl 16(%rax), %ecx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:595
    "\ttestl %ecx, %ecx\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:597
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_80_getScope__done) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_80_getScope__loop)
    "\tmovq 16(%rdx), %rdx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:599
    "\tsubl $1, %ecx\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:600
    "\ttestl %ecx, %ecx\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:601
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_80_getScope__loop) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_80_getScope__done)
    "\tmovslq 8(%r10, %rsi, 8), %rbx\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq %rdx, 0(%r13, %rbx, 8)\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:639
    "\tmovq 48(%r10, %rsi, 8), %rbx\n"                       // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tmovq %rdx, 24(%rbx)\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:184
    "\taddq $7, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_resolve_base_to_scope_with_top_scope_check)
    "\tmovq 32(%r10, %rsi, 8), %rax\n"                       // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tmovq 0(%rax), %rax\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:590
    "\tmovslq 16(%rax), %rdx\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:799
    "\tmovq 0(%r13, %rdx, 8), %rdx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:801
    "\ttestq %rdx, %rdx\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:804
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_getScope__80_loadInitialScope__scopeChainNotCreated) "\n"
    "\tmovq 16(%rdx), %rdx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:805
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_getScope__80_loadInitialScope__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:806

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_getScope__80_loadInitialScope__scopeChainNotCreated)
    "\tmovq -24(%r13), %rdx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:808

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_getScope__80_loadInitialScope__done)
    "\tmovl 40(%rax), %ecx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:595
    "\ttestl %ecx, %ecx\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:597
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_81_getScope__done) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_81_getScope__loop)
    "\tmovq 16(%rdx), %rdx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:599
    "\tsubl $1, %ecx\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:600
    "\ttestl %ecx, %ecx\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:601
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_81_getScope__loop) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_81_getScope__done)
    "\tmovslq 8(%r10, %rsi, 8), %rbx\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq %rdx, 0(%r13, %rbx, 8)\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:639
    "\tmovq 48(%r10, %rsi, 8), %rbx\n"                       // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tmovq %rdx, 24(%rbx)\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:184
    "\taddq $7, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_resolve_base)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_resolve_base) "\n"
    "\tmovq %rax, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $7, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_resolve_with_base)
    "\tmovq 32(%r10, %rsi, 8), %rax\n"                       // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tmovq 0(%rax), %rax\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:590
    "\ttestq %rax, %rax\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:831
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_interpretResolveWithBase__slowPath) "\n"
    "\tmovq -24(%r13), %rbx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:833
    "\tmovslq 0(%rax), %rcx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:835
    "\tcmpl $9, %ecx\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:837
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_interpretResolveWithBase__notSkipScopes) "\n"
    "\tmovq %rbx, %rdx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:838
    "\tmovl 16(%rax), %ecx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:595
    "\ttestl %ecx, %ecx\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:597
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_interpretResolveWithBase__82_getScope__done) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_interpretResolveWithBase__82_getScope__loop)
    "\tmovq 16(%rdx), %rdx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:599
    "\tsubl $1, %ecx\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:600
    "\ttestl %ecx, %ecx\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:601
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_interpretResolveWithBase__82_getScope__loop) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_interpretResolveWithBase__82_getScope__done)
    "\tmovq %rdx, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:840
    "\taddq $24, %rax\n"                                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:841
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_interpretResolveWithBase__haveCorrectScope) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:842

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_interpretResolveWithBase__notSkipScopes)
    "\tcmpl $8, %ecx\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:846
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_interpretResolveWithBase__notSkipTopScopeNode) "\n"
    "\tmovslq 16(%rax), %rdx\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:847
    "\tmovq 0(%r13, %rdx, 8), %rdx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:848
    "\ttestq %rdx, %rdx\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:851
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_interpretResolveWithBase__getScope__82_loadInitialScope__scopeChainNotCreated) "\n"
    "\tmovq 16(%rdx), %rdx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:852
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_interpretResolveWithBase__getScope__82_loadInitialScope__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:853

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_interpretResolveWithBase__getScope__82_loadInitialScope__scopeChainNotCreated)
    "\tmovq -24(%r13), %rdx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:855

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_interpretResolveWithBase__getScope__82_loadInitialScope__done)
    "\tmovl 40(%rax), %ecx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:595
    "\ttestl %ecx, %ecx\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:597
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_interpretResolveWithBase__83_getScope__done) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_interpretResolveWithBase__83_getScope__loop)
    "\tmovq 16(%rdx), %rdx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:599
    "\tsubl $1, %ecx\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:600
    "\ttestl %ecx, %ecx\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:601
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_interpretResolveWithBase__83_getScope__loop) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_interpretResolveWithBase__83_getScope__done)
    "\tmovq %rdx, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:859
    "\taddq $48, %rax\n"                                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:861

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_interpretResolveWithBase__notSkipTopScopeNode)

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_interpretResolveWithBase__haveCorrectScope)
    "\tmovslq 0(%rax), %rcx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:870
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpl $3, %ecx\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:876
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_interpretResolveWithBase__notSetBaseToScope) "\n"
    "\tmovq %rbx, 0(%r13, %rdx, 8)\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:878
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_interpretResolveWithBase__haveSetBase) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:883

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_interpretResolveWithBase__notSetBaseToScope)
    "\tcmpl $1, %ecx\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:887
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_interpretResolveWithBase__notSetBaseToUndefined) "\n"
    "\tmovq $10, 0(%r13, %rdx, 8)\n"                         // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:889
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_interpretResolveWithBase__haveSetBase) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:894

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_interpretResolveWithBase__notSetBaseToUndefined)
    "\tcmpl $4, %ecx\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:897
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_interpretResolveWithBase__slowPath) "\n"
    "\tmovq 0(%rbx), %rcx\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:898
    "\tmovq 8(%rcx), %rcx\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:899
    "\tmovq %rcx, 0(%r13, %rdx, 8)\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:901

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_interpretResolveWithBase__haveSetBase)
    "\tmovslq 24(%rax), %rcx\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:912
    "\tmovslq 16(%r10, %rsi, 8), %rdx\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpl $5, %ecx\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:917
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_interpretResolveWithBase__notGetAndReturnScopedVar) "\n"
    "\tmovq 32(%rbx), %rbx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:918
    "\tmovslq 40(%rax), %rcx\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:921
    "\tmovq 0(%rbx, %rcx, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:608
    "\tmovq %rax, 0(%r13, %rdx, 8)\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:609
    "\tmovq 48(%r10, %rsi, 8), %rdx\n"                       // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tmovq %rax, 24(%rdx)\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:184
    "\taddq $7, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_interpretResolveWithBase__notGetAndReturnScopedVar)
    "\tcmpl $11, %ecx\n"                                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:926
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_interpretResolveWithBase__slowPath) "\n"
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_resolve_with_base) "\n"
    "\tmovq %rax, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $7, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_interpretResolveWithBase__slowPath)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_resolve_with_base) "\n"
    "\tmovq %rax, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $7, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_resolve_with_this)
    "\tmovq 32(%r10, %rsi, 8), %rax\n"                       // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tmovq 0(%rax), %rax\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:590
    "\ttestq %rax, %rax\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:831
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_85_interpretResolveWithBase__slowPath) "\n"
    "\tmovq -24(%r13), %rbx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:833
    "\tmovslq 0(%rax), %rcx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:835
    "\tcmpl $9, %ecx\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:837
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_85_interpretResolveWithBase__notSkipScopes) "\n"
    "\tmovq %rbx, %rdx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:838
    "\tmovl 16(%rax), %ecx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:595
    "\ttestl %ecx, %ecx\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:597
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_interpretResolveWithBase__84_getScope__done) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_interpretResolveWithBase__84_getScope__loop)
    "\tmovq 16(%rdx), %rdx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:599
    "\tsubl $1, %ecx\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:600
    "\ttestl %ecx, %ecx\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:601
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_interpretResolveWithBase__84_getScope__loop) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_interpretResolveWithBase__84_getScope__done)
    "\tmovq %rdx, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:840
    "\taddq $24, %rax\n"                                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:841
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_85_interpretResolveWithBase__haveCorrectScope) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:842

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_85_interpretResolveWithBase__notSkipScopes)
    "\tcmpl $8, %ecx\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:846
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_85_interpretResolveWithBase__notSkipTopScopeNode) "\n"
    "\tmovslq 16(%rax), %rdx\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:847
    "\tmovq 0(%r13, %rdx, 8), %rdx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:848
    "\ttestq %rdx, %rdx\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:851
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_interpretResolveWithBase__getScope__84_loadInitialScope__scopeChainNotCreated) "\n"
    "\tmovq 16(%rdx), %rdx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:852
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_interpretResolveWithBase__getScope__84_loadInitialScope__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:853

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_interpretResolveWithBase__getScope__84_loadInitialScope__scopeChainNotCreated)
    "\tmovq -24(%r13), %rdx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:855

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_interpretResolveWithBase__getScope__84_loadInitialScope__done)
    "\tmovl 40(%rax), %ecx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:595
    "\ttestl %ecx, %ecx\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:597
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_interpretResolveWithBase__85_getScope__done) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_interpretResolveWithBase__85_getScope__loop)
    "\tmovq 16(%rdx), %rdx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:599
    "\tsubl $1, %ecx\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:600
    "\ttestl %ecx, %ecx\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:601
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_interpretResolveWithBase__85_getScope__loop) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_interpretResolveWithBase__85_getScope__done)
    "\tmovq %rdx, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:859
    "\taddq $48, %rax\n"                                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:861

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_85_interpretResolveWithBase__notSkipTopScopeNode)

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_85_interpretResolveWithBase__haveCorrectScope)
    "\tmovslq 0(%rax), %rcx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:870
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpl $3, %ecx\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:876
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_85_interpretResolveWithBase__notSetBaseToScope) "\n"
    "\tmovq %rbx, 0(%r13, %rdx, 8)\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:878
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_85_interpretResolveWithBase__haveSetBase) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:883

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_85_interpretResolveWithBase__notSetBaseToScope)
    "\tcmpl $1, %ecx\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:887
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_85_interpretResolveWithBase__notSetBaseToUndefined) "\n"
    "\tmovq $10, 0(%r13, %rdx, 8)\n"                         // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:889
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_85_interpretResolveWithBase__haveSetBase) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:894

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_85_interpretResolveWithBase__notSetBaseToUndefined)
    "\tcmpl $4, %ecx\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:897
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_85_interpretResolveWithBase__slowPath) "\n"
    "\tmovq 0(%rbx), %rcx\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:898
    "\tmovq 8(%rcx), %rcx\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:899
    "\tmovq %rcx, 0(%r13, %rdx, 8)\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:901

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_85_interpretResolveWithBase__haveSetBase)
    "\tmovslq 24(%rax), %rcx\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:912
    "\tmovslq 16(%r10, %rsi, 8), %rdx\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpl $5, %ecx\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:917
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_85_interpretResolveWithBase__notGetAndReturnScopedVar) "\n"
    "\tmovq 32(%rbx), %rbx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:918
    "\tmovslq 40(%rax), %rcx\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:921
    "\tmovq 0(%rbx, %rcx, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:608
    "\tmovq %rax, 0(%r13, %rdx, 8)\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:609
    "\tmovq 40(%r10, %rsi, 8), %rdx\n"                       // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tmovq %rax, 24(%rdx)\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:184
    "\taddq $6, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_85_interpretResolveWithBase__notGetAndReturnScopedVar)
    "\tcmpl $11, %ecx\n"                                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:926
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_85_interpretResolveWithBase__slowPath) "\n"
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_resolve_with_this) "\n"
    "\tmovq %rax, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $6, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_85_interpretResolveWithBase__slowPath)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_resolve_with_this) "\n"
    "\tmovq %rax, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $6, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_del_by_id)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_del_by_id) "\n"
    "\tmovq %rax, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $4, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_del_by_val)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_del_by_val) "\n"
    "\tmovq %rax, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $4, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_put_by_index)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_put_by_index) "\n"
    "\tmovq %rax, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $4, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_put_getter_setter)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_put_getter_setter) "\n"
    "\tmovq %rax, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $5, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_jtrue)
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rdx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:157
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_jumpTrueOrFalse__85_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rdx, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_jumpTrueOrFalse__85_loadConstantOrVariable__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_jumpTrueOrFalse__85_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161
    "\tmovq 520(%rax), %rax\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:162
    "\tsubq $1073741824, %rdx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:163
    "\tmovq 0(%rax, %rdx, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:164

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_jumpTrueOrFalse__85_loadConstantOrVariable__done)
    "\txorq $6, %rax\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1222
    "\ttestq %rax, %rax\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1223
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_jumpTrueOrFalse__slow) "\n"
    "\ttestl %eax, %eax\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:985
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_jumpTrueOrFalse__target) "\n"
    "\taddq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_jumpTrueOrFalse__target)
    "\taddl 16(%r10, %rsi, 8), %esi\n"                       // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:46
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_jumpTrueOrFalse__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_jtrue) "\n"
    "\tmovq %rax, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"

OFFLINE_ASM_OPCODE_LABEL(op_jfalse)
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rdx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:157
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_jumpTrueOrFalse__86_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rdx, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_jumpTrueOrFalse__86_loadConstantOrVariable__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_jumpTrueOrFalse__86_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161
    "\tmovq 520(%rax), %rax\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:162
    "\tsubq $1073741824, %rdx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:163
    "\tmovq 0(%rax, %rdx, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:164

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_jumpTrueOrFalse__86_loadConstantOrVariable__done)
    "\txorq $6, %rax\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1222
    "\ttestq %rax, %rax\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1223
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_86_jumpTrueOrFalse__slow) "\n"
    "\ttestl %eax, %eax\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:992
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_86_jumpTrueOrFalse__target) "\n"
    "\taddq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_86_jumpTrueOrFalse__target)
    "\taddl 16(%r10, %rsi, 8), %esi\n"                       // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:46
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_86_jumpTrueOrFalse__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_jfalse) "\n"
    "\tmovq %rax, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"

OFFLINE_ASM_OPCODE_LABEL(op_jless)
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 16(%r10, %rsi, 8), %rbx\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rcx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:157
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_compare__87_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_compare__87_loadConstantOrVariable__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__87_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161
    "\tmovq 520(%rax), %rax\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:162
    "\tsubq $1073741824, %rcx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:163
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:164

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__87_loadConstantOrVariable__done)
    "\tcmpq $1073741824, %rbx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:157
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_compare__88_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rbx, 8), %rdx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_compare__88_loadConstantOrVariable__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__88_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161
    "\tmovq 520(%rdx), %rdx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:162
    "\tsubq $1073741824, %rbx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:163
    "\tmovq 0(%rdx, %rbx, 8), %rdx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:164

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__88_loadConstantOrVariable__done)
    "\tcmpq %r14, %rax\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1298
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_compare__op1NotInt) "\n"
    "\tcmpq %r14, %rdx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1299
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_compare__op2NotInt) "\n"
    "\tcmpl %edx, %eax\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:999
    "\tjl " LOCAL_LABEL_STRING(_offlineasm_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__op1NotInt)
    "\ttestq %r14, %rax\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1304
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_compare__slow) "\n"
    "\tcmpq %r14, %rdx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1305
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_compare__op1NotIntOp2NotInt) "\n"
    "\tcvtsi2sd %edx, %xmm1\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1306
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_compare__op1NotIntReady) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1307

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__op1NotIntOp2NotInt)
    "\ttestq %r14, %rdx\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1309
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_compare__slow) "\n"
    "\taddq %r14, %rdx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1310
    "\tmovq %rdx, %xmm1\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1311

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__op1NotIntReady)
    "\taddq %r14, %rax\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1313
    "\tmovq %rax, %xmm0\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1314
    "\tucomisd %xmm0, %xmm1\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:1000
    "\tja " LOCAL_LABEL_STRING(_offlineasm_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__op2NotInt)
    "\tcvtsi2sd %eax, %xmm0\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1319
    "\ttestq %r14, %rdx\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1320
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_compare__slow) "\n"
    "\taddq %r14, %rdx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1321
    "\tmovq %rdx, %xmm1\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1322
    "\tucomisd %xmm0, %xmm1\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:1000
    "\tja " LOCAL_LABEL_STRING(_offlineasm_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__jumpTarget)
    "\taddl 24(%r10, %rsi, 8), %esi\n"                       // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:46
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_jless) "\n"
    "\tmovq %rax, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"

OFFLINE_ASM_OPCODE_LABEL(op_jnless)
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 16(%r10, %rsi, 8), %rbx\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rcx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:157
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_compare__89_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_compare__89_loadConstantOrVariable__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__89_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161
    "\tmovq 520(%rax), %rax\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:162
    "\tsubq $1073741824, %rcx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:163
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:164

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__89_loadConstantOrVariable__done)
    "\tcmpq $1073741824, %rbx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:157
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_compare__90_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rbx, 8), %rdx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_compare__90_loadConstantOrVariable__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__90_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161
    "\tmovq 520(%rdx), %rdx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:162
    "\tsubq $1073741824, %rbx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:163
    "\tmovq 0(%rdx, %rbx, 8), %rdx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:164

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__90_loadConstantOrVariable__done)
    "\tcmpq %r14, %rax\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1298
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_90_compare__op1NotInt) "\n"
    "\tcmpq %r14, %rdx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1299
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_90_compare__op2NotInt) "\n"
    "\tcmpl %edx, %eax\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:1007
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_90_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_90_compare__op1NotInt)
    "\ttestq %r14, %rax\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1304
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_90_compare__slow) "\n"
    "\tcmpq %r14, %rdx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1305
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_90_compare__op1NotIntOp2NotInt) "\n"
    "\tcvtsi2sd %edx, %xmm1\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1306
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_90_compare__op1NotIntReady) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1307

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_90_compare__op1NotIntOp2NotInt)
    "\ttestq %r14, %rdx\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1309
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_90_compare__slow) "\n"
    "\taddq %r14, %rdx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1310
    "\tmovq %rdx, %xmm1\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1311

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_90_compare__op1NotIntReady)
    "\taddq %r14, %rax\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1313
    "\tmovq %rax, %xmm0\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1314
    "\tucomisd %xmm0, %xmm1\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:1008
    "\tjbe " LOCAL_LABEL_STRING(_offlineasm_90_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_90_compare__op2NotInt)
    "\tcvtsi2sd %eax, %xmm0\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1319
    "\ttestq %r14, %rdx\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1320
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_90_compare__slow) "\n"
    "\taddq %r14, %rdx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1321
    "\tmovq %rdx, %xmm1\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1322
    "\tucomisd %xmm0, %xmm1\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:1008
    "\tjbe " LOCAL_LABEL_STRING(_offlineasm_90_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_90_compare__jumpTarget)
    "\taddl 24(%r10, %rsi, 8), %esi\n"                       // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:46
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_90_compare__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_jnless) "\n"
    "\tmovq %rax, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"

OFFLINE_ASM_OPCODE_LABEL(op_jgreater)
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 16(%r10, %rsi, 8), %rbx\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rcx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:157
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_compare__91_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_compare__91_loadConstantOrVariable__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__91_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161
    "\tmovq 520(%rax), %rax\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:162
    "\tsubq $1073741824, %rcx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:163
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:164

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__91_loadConstantOrVariable__done)
    "\tcmpq $1073741824, %rbx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:157
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_compare__92_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rbx, 8), %rdx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_compare__92_loadConstantOrVariable__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__92_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161
    "\tmovq 520(%rdx), %rdx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:162
    "\tsubq $1073741824, %rbx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:163
    "\tmovq 0(%rdx, %rbx, 8), %rdx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:164

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__92_loadConstantOrVariable__done)
    "\tcmpq %r14, %rax\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1298
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_92_compare__op1NotInt) "\n"
    "\tcmpq %r14, %rdx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1299
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_92_compare__op2NotInt) "\n"
    "\tcmpl %edx, %eax\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:1015
    "\tjg " LOCAL_LABEL_STRING(_offlineasm_92_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_92_compare__op1NotInt)
    "\ttestq %r14, %rax\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1304
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_92_compare__slow) "\n"
    "\tcmpq %r14, %rdx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1305
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_92_compare__op1NotIntOp2NotInt) "\n"
    "\tcvtsi2sd %edx, %xmm1\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1306
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_92_compare__op1NotIntReady) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1307

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_92_compare__op1NotIntOp2NotInt)
    "\ttestq %r14, %rdx\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1309
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_92_compare__slow) "\n"
    "\taddq %r14, %rdx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1310
    "\tmovq %rdx, %xmm1\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1311

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_92_compare__op1NotIntReady)
    "\taddq %r14, %rax\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1313
    "\tmovq %rax, %xmm0\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1314
    "\tucomisd %xmm1, %xmm0\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:1016
    "\tja " LOCAL_LABEL_STRING(_offlineasm_92_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_92_compare__op2NotInt)
    "\tcvtsi2sd %eax, %xmm0\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1319
    "\ttestq %r14, %rdx\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1320
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_92_compare__slow) "\n"
    "\taddq %r14, %rdx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1321
    "\tmovq %rdx, %xmm1\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1322
    "\tucomisd %xmm1, %xmm0\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:1016
    "\tja " LOCAL_LABEL_STRING(_offlineasm_92_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_92_compare__jumpTarget)
    "\taddl 24(%r10, %rsi, 8), %esi\n"                       // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:46
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_92_compare__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_jgreater) "\n"
    "\tmovq %rax, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"

OFFLINE_ASM_OPCODE_LABEL(op_jngreater)
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 16(%r10, %rsi, 8), %rbx\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rcx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:157
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_compare__93_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_compare__93_loadConstantOrVariable__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__93_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161
    "\tmovq 520(%rax), %rax\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:162
    "\tsubq $1073741824, %rcx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:163
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:164

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__93_loadConstantOrVariable__done)
    "\tcmpq $1073741824, %rbx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:157
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_compare__94_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rbx, 8), %rdx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_compare__94_loadConstantOrVariable__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__94_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161
    "\tmovq 520(%rdx), %rdx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:162
    "\tsubq $1073741824, %rbx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:163
    "\tmovq 0(%rdx, %rbx, 8), %rdx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:164

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__94_loadConstantOrVariable__done)
    "\tcmpq %r14, %rax\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1298
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_94_compare__op1NotInt) "\n"
    "\tcmpq %r14, %rdx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1299
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_94_compare__op2NotInt) "\n"
    "\tcmpl %edx, %eax\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:1023
    "\tjle " LOCAL_LABEL_STRING(_offlineasm_94_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_94_compare__op1NotInt)
    "\ttestq %r14, %rax\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1304
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_94_compare__slow) "\n"
    "\tcmpq %r14, %rdx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1305
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_94_compare__op1NotIntOp2NotInt) "\n"
    "\tcvtsi2sd %edx, %xmm1\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1306
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_94_compare__op1NotIntReady) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1307

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_94_compare__op1NotIntOp2NotInt)
    "\ttestq %r14, %rdx\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1309
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_94_compare__slow) "\n"
    "\taddq %r14, %rdx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1310
    "\tmovq %rdx, %xmm1\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1311

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_94_compare__op1NotIntReady)
    "\taddq %r14, %rax\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1313
    "\tmovq %rax, %xmm0\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1314
    "\tucomisd %xmm1, %xmm0\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:1024
    "\tjbe " LOCAL_LABEL_STRING(_offlineasm_94_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_94_compare__op2NotInt)
    "\tcvtsi2sd %eax, %xmm0\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1319
    "\ttestq %r14, %rdx\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1320
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_94_compare__slow) "\n"
    "\taddq %r14, %rdx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1321
    "\tmovq %rdx, %xmm1\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1322
    "\tucomisd %xmm1, %xmm0\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:1024
    "\tjbe " LOCAL_LABEL_STRING(_offlineasm_94_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_94_compare__jumpTarget)
    "\taddl 24(%r10, %rsi, 8), %esi\n"                       // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:46
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_94_compare__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_jngreater) "\n"
    "\tmovq %rax, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"

OFFLINE_ASM_OPCODE_LABEL(op_jlesseq)
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 16(%r10, %rsi, 8), %rbx\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rcx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:157
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_compare__95_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_compare__95_loadConstantOrVariable__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__95_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161
    "\tmovq 520(%rax), %rax\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:162
    "\tsubq $1073741824, %rcx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:163
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:164

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__95_loadConstantOrVariable__done)
    "\tcmpq $1073741824, %rbx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:157
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_compare__96_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rbx, 8), %rdx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_compare__96_loadConstantOrVariable__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__96_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161
    "\tmovq 520(%rdx), %rdx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:162
    "\tsubq $1073741824, %rbx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:163
    "\tmovq 0(%rdx, %rbx, 8), %rdx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:164

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__96_loadConstantOrVariable__done)
    "\tcmpq %r14, %rax\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1298
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_96_compare__op1NotInt) "\n"
    "\tcmpq %r14, %rdx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1299
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_96_compare__op2NotInt) "\n"
    "\tcmpl %edx, %eax\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:1031
    "\tjle " LOCAL_LABEL_STRING(_offlineasm_96_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_96_compare__op1NotInt)
    "\ttestq %r14, %rax\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1304
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_96_compare__slow) "\n"
    "\tcmpq %r14, %rdx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1305
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_96_compare__op1NotIntOp2NotInt) "\n"
    "\tcvtsi2sd %edx, %xmm1\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1306
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_96_compare__op1NotIntReady) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1307

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_96_compare__op1NotIntOp2NotInt)
    "\ttestq %r14, %rdx\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1309
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_96_compare__slow) "\n"
    "\taddq %r14, %rdx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1310
    "\tmovq %rdx, %xmm1\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1311

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_96_compare__op1NotIntReady)
    "\taddq %r14, %rax\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1313
    "\tmovq %rax, %xmm0\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1314
    "\tucomisd %xmm0, %xmm1\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:1032
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_96_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_96_compare__op2NotInt)
    "\tcvtsi2sd %eax, %xmm0\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1319
    "\ttestq %r14, %rdx\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1320
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_96_compare__slow) "\n"
    "\taddq %r14, %rdx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1321
    "\tmovq %rdx, %xmm1\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1322
    "\tucomisd %xmm0, %xmm1\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:1032
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_96_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_96_compare__jumpTarget)
    "\taddl 24(%r10, %rsi, 8), %esi\n"                       // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:46
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_96_compare__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_jlesseq) "\n"
    "\tmovq %rax, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"

OFFLINE_ASM_OPCODE_LABEL(op_jnlesseq)
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 16(%r10, %rsi, 8), %rbx\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rcx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:157
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_compare__97_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_compare__97_loadConstantOrVariable__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__97_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161
    "\tmovq 520(%rax), %rax\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:162
    "\tsubq $1073741824, %rcx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:163
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:164

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__97_loadConstantOrVariable__done)
    "\tcmpq $1073741824, %rbx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:157
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_compare__98_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rbx, 8), %rdx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_compare__98_loadConstantOrVariable__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__98_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161
    "\tmovq 520(%rdx), %rdx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:162
    "\tsubq $1073741824, %rbx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:163
    "\tmovq 0(%rdx, %rbx, 8), %rdx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:164

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__98_loadConstantOrVariable__done)
    "\tcmpq %r14, %rax\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1298
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_98_compare__op1NotInt) "\n"
    "\tcmpq %r14, %rdx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1299
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_98_compare__op2NotInt) "\n"
    "\tcmpl %edx, %eax\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:1039
    "\tjg " LOCAL_LABEL_STRING(_offlineasm_98_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_98_compare__op1NotInt)
    "\ttestq %r14, %rax\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1304
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_98_compare__slow) "\n"
    "\tcmpq %r14, %rdx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1305
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_98_compare__op1NotIntOp2NotInt) "\n"
    "\tcvtsi2sd %edx, %xmm1\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1306
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_98_compare__op1NotIntReady) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1307

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_98_compare__op1NotIntOp2NotInt)
    "\ttestq %r14, %rdx\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1309
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_98_compare__slow) "\n"
    "\taddq %r14, %rdx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1310
    "\tmovq %rdx, %xmm1\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1311

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_98_compare__op1NotIntReady)
    "\taddq %r14, %rax\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1313
    "\tmovq %rax, %xmm0\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1314
    "\tucomisd %xmm0, %xmm1\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:1040
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_98_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_98_compare__op2NotInt)
    "\tcvtsi2sd %eax, %xmm0\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1319
    "\ttestq %r14, %rdx\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1320
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_98_compare__slow) "\n"
    "\taddq %r14, %rdx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1321
    "\tmovq %rdx, %xmm1\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1322
    "\tucomisd %xmm0, %xmm1\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:1040
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_98_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_98_compare__jumpTarget)
    "\taddl 24(%r10, %rsi, 8), %esi\n"                       // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:46
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_98_compare__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_jnlesseq) "\n"
    "\tmovq %rax, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"

OFFLINE_ASM_OPCODE_LABEL(op_jgreatereq)
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 16(%r10, %rsi, 8), %rbx\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rcx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:157
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_compare__99_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_compare__99_loadConstantOrVariable__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__99_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161
    "\tmovq 520(%rax), %rax\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:162
    "\tsubq $1073741824, %rcx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:163
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:164

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__99_loadConstantOrVariable__done)
    "\tcmpq $1073741824, %rbx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:157
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_compare__100_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rbx, 8), %rdx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_compare__100_loadConstantOrVariable__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__100_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161
    "\tmovq 520(%rdx), %rdx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:162
    "\tsubq $1073741824, %rbx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:163
    "\tmovq 0(%rdx, %rbx, 8), %rdx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:164

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__100_loadConstantOrVariable__done)
    "\tcmpq %r14, %rax\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1298
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_100_compare__op1NotInt) "\n"
    "\tcmpq %r14, %rdx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1299
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_100_compare__op2NotInt) "\n"
    "\tcmpl %edx, %eax\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:1047
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_100_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_100_compare__op1NotInt)
    "\ttestq %r14, %rax\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1304
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_100_compare__slow) "\n"
    "\tcmpq %r14, %rdx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1305
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_100_compare__op1NotIntOp2NotInt) "\n"
    "\tcvtsi2sd %edx, %xmm1\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1306
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_100_compare__op1NotIntReady) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1307

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_100_compare__op1NotIntOp2NotInt)
    "\ttestq %r14, %rdx\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1309
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_100_compare__slow) "\n"
    "\taddq %r14, %rdx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1310
    "\tmovq %rdx, %xmm1\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1311

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_100_compare__op1NotIntReady)
    "\taddq %r14, %rax\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1313
    "\tmovq %rax, %xmm0\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1314
    "\tucomisd %xmm1, %xmm0\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:1048
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_100_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_100_compare__op2NotInt)
    "\tcvtsi2sd %eax, %xmm0\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1319
    "\ttestq %r14, %rdx\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1320
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_100_compare__slow) "\n"
    "\taddq %r14, %rdx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1321
    "\tmovq %rdx, %xmm1\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1322
    "\tucomisd %xmm1, %xmm0\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:1048
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_100_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_100_compare__jumpTarget)
    "\taddl 24(%r10, %rsi, 8), %esi\n"                       // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:46
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_100_compare__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_jgreatereq) "\n"
    "\tmovq %rax, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"

OFFLINE_ASM_OPCODE_LABEL(op_jngreatereq)
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 16(%r10, %rsi, 8), %rbx\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rcx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:157
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_compare__101_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_compare__101_loadConstantOrVariable__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__101_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161
    "\tmovq 520(%rax), %rax\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:162
    "\tsubq $1073741824, %rcx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:163
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:164

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__101_loadConstantOrVariable__done)
    "\tcmpq $1073741824, %rbx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:157
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_compare__102_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rbx, 8), %rdx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_compare__102_loadConstantOrVariable__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__102_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161
    "\tmovq 520(%rdx), %rdx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:162
    "\tsubq $1073741824, %rbx\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:163
    "\tmovq 0(%rdx, %rbx, 8), %rdx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:164

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__102_loadConstantOrVariable__done)
    "\tcmpq %r14, %rax\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1298
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_102_compare__op1NotInt) "\n"
    "\tcmpq %r14, %rdx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1299
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_102_compare__op2NotInt) "\n"
    "\tcmpl %edx, %eax\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:1055
    "\tjl " LOCAL_LABEL_STRING(_offlineasm_102_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_102_compare__op1NotInt)
    "\ttestq %r14, %rax\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1304
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_102_compare__slow) "\n"
    "\tcmpq %r14, %rdx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1305
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_102_compare__op1NotIntOp2NotInt) "\n"
    "\tcvtsi2sd %edx, %xmm1\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1306
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_102_compare__op1NotIntReady) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1307

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_102_compare__op1NotIntOp2NotInt)
    "\ttestq %r14, %rdx\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1309
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_102_compare__slow) "\n"
    "\taddq %r14, %rdx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1310
    "\tmovq %rdx, %xmm1\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1311

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_102_compare__op1NotIntReady)
    "\taddq %r14, %rax\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1313
    "\tmovq %rax, %xmm0\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1314
    "\tucomisd %xmm1, %xmm0\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:1056
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_102_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_102_compare__op2NotInt)
    "\tcvtsi2sd %eax, %xmm0\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1319
    "\ttestq %r14, %rdx\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1320
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_102_compare__slow) "\n"
    "\taddq %r14, %rdx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1321
    "\tmovq %rdx, %xmm1\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1322
    "\tucomisd %xmm1, %xmm0\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:1056
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_102_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_102_compare__jumpTarget)
    "\taddl 24(%r10, %rsi, 8), %esi\n"                       // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:46
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_102_compare__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_jngreatereq) "\n"
    "\tmovq %rax, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"

OFFLINE_ASM_OPCODE_LABEL(op_loop_hint)
    "\tmovq 112(%rsp), %rdx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:1062
    "\tmovzbl 36768(%rdx), %eax\n"                           // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:1063
    "\ttestb %al, %al\n"                                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:1064
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_handleWatchdogTimer) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_afterWatchdogTimerCheck)
    "\tmovq -8(%r13), %rax\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:257
    "\taddl $1, 576(%rax)\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:258
    "\tjs " LOCAL_LABEL_STRING(_offlineasm_checkSwitchToJITForLoop__102_checkSwitchToJIT__continue) "\n"
    "\tmovl %esi, -44(%r13)\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:143
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_loop_osr) "\n"
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:146
    "\ttestq %rax, %rax\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_checkSwitchToJITForLoop__checkSwitchToJIT__action__recover) "\n"
    "\tjmp *%rax\n"                                          // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_checkSwitchToJITForLoop__checkSwitchToJIT__action__recover)
    "\tmovq %rbx, %r10\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:150
    "\tmovl -44(%r13), %esi\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_checkSwitchToJITForLoop__102_checkSwitchToJIT__continue)
    "\taddq $1, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_handleWatchdogTimer)
    "\tmovl %esi, -44(%r13)\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:130
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_handle_watchdog_timer) "\n"
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:133
    "\ttestq %rax, %rax\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:134
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_throwHandler) "\n"
    "\tmovq %rbx, %r10\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:135
    "\tmovl -44(%r13), %esi\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:136
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_afterWatchdogTimerCheck) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:1070

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_throwHandler)
    "\tjmp " LOCAL_REFERENCE(llint_throw_from_slow_path_trampoline) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:1072

OFFLINE_ASM_OPCODE_LABEL(op_switch_string)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_switch_string) "\n"
    "\tmovq %rax, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"

OFFLINE_ASM_OPCODE_LABEL(op_new_func_exp)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_new_func_exp) "\n"
    "\tmovq %rax, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_call)
    "\tmovslq 24(%r10, %rsi, 8), %rbx\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq -56(%r13, %rbx, 8), %rax\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1416
    "\ttestq %r15, %rax\n"                                   // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1417
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_arrayProfileForCall__done) "\n"
    "\tmovq 0(%rax), %rax\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1418
    "\tmovq 40(%r10, %rsi, 8), %rdx\n"                       // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tmovq %rax, 8(%rdx)\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1420

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_arrayProfileForCall__done)
    "\tmovslq 8(%r10, %rsi, 8), %rax\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq 32(%r10, %rsi, 8), %rdx\n"                       // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tmovq 16(%rdx), %rcx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1428
    "\tcmpq $1073741824, %rax\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:157
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_doCall__103_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rbx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_doCall__103_loadConstantOrVariable__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_doCall__103_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rbx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161
    "\tmovq 520(%rbx), %rbx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:162
    "\tsubq $1073741824, %rax\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:163
    "\tmovq 0(%rbx, %rax, 8), %rbx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:164

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_doCall__103_loadConstantOrVariable__done)
    "\tcmpq %rcx, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1430
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_doCall__opCallSlow) "\n"
    "\tmovslq 24(%r10, %rsi, 8), %rbx\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\taddl $6, %esi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1432
    "\tsall $3, %ebx\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1433
    "\taddq %r13, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1434
    "\tmovq 32(%rcx), %rax\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1435
    "\tmovq %rcx, -32(%rbx)\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1436
    "\tmovq %rax, -24(%rbx)\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1437
    "\tmovslq -32(%r10, %rsi, 8), %rcx\n"                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovl %esi, -44(%r13)\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1439
    "\tmovq %r13, -40(%rbx)\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1440
    "\tmovl %ecx, -48(%rbx)\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1441
    "\tmovq %rbx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1442
    "\tcall *32(%rdx)\n"                                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:227
    "\tmovl -44(%r13), %esi\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    "\tmovq -8(%r13), %r10\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tmovq 96(%r10), %r10\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_doCall__opCallSlow)
    "\tleal 6(%esi), %eax\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:121
    "\tmovl %eax, -44(%r13)\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:122
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_call) "\n"
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:125
    "\tcall *%rax\n"                                         // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:240
    "\tmovl -44(%r13), %esi\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    "\tmovq -8(%r13), %r10\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tmovq 96(%r10), %r10\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_construct)
    "\tmovslq 8(%r10, %rsi, 8), %rax\n"                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq 32(%r10, %rsi, 8), %rdx\n"                       // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tmovq 16(%rdx), %rcx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1428
    "\tcmpq $1073741824, %rax\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:157
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_doCall__104_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rbx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_doCall__104_loadConstantOrVariable__done) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_doCall__104_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rbx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161
    "\tmovq 520(%rbx), %rbx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:162
    "\tsubq $1073741824, %rax\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:163
    "\tmovq 0(%rbx, %rax, 8), %rbx\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:164

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_doCall__104_loadConstantOrVariable__done)
    "\tcmpq %rcx, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1430
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_104_doCall__opCallSlow) "\n"
    "\tmovslq 24(%r10, %rsi, 8), %rbx\n"                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\taddl $6, %esi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1432
    "\tsall $3, %ebx\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1433
    "\taddq %r13, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1434
    "\tmovq 32(%rcx), %rax\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1435
    "\tmovq %rcx, -32(%rbx)\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1436
    "\tmovq %rax, -24(%rbx)\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1437
    "\tmovslq -32(%r10, %rsi, 8), %rcx\n"                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovl %esi, -44(%r13)\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1439
    "\tmovq %r13, -40(%rbx)\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1440
    "\tmovl %ecx, -48(%rbx)\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1441
    "\tmovq %rbx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1442
    "\tcall *32(%rdx)\n"                                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:227
    "\tmovl -44(%r13), %esi\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    "\tmovq -8(%r13), %r10\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tmovq 96(%r10), %r10\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_104_doCall__opCallSlow)
    "\tleal 6(%esi), %eax\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:121
    "\tmovl %eax, -44(%r13)\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:122
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_construct) "\n"
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:125
    "\tcall *%rax\n"                                         // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:240
    "\tmovl -44(%r13), %esi\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    "\tmovq -8(%r13), %r10\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tmovq 96(%r10), %r10\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_call_varargs)
    "\tleal 6(%esi), %eax\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:121
    "\tmovl %eax, -44(%r13)\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:122
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_call_varargs) "\n"
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:125
    "\tcall *%rax\n"                                         // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:240
    "\tmovl -44(%r13), %esi\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    "\tmovq -8(%r13), %r10\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tmovq 96(%r10), %r10\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_call_eval)
    "\tleal 4(%esi), %eax\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:121
    "\tmovl %eax, -44(%r13)\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:122
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_call_eval) "\n"
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:125
    "\tcall *%rax\n"                                         // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:240
    "\tmovl -44(%r13), %esi\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    "\tmovq -8(%r13), %r10\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tmovq 96(%r10), %r10\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_GLUE_LABEL(llint_generic_return_point)
    "\tmovl -44(%r13), %esi\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    "\tmovq -8(%r13), %r10\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tmovq 96(%r10), %r10\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_strcat)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_strcat) "\n"
    "\tmovq %rax, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $4, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_get_pnames)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_get_pnames) "\n"
    "\tmovq %rax, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"

OFFLINE_ASM_OPCODE_LABEL(op_push_with_scope)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_push_with_scope) "\n"
    "\tmovq %rax, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $2, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_pop_scope)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_pop_scope) "\n"
    "\tmovq %rax, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $1, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_push_name_scope)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_push_name_scope) "\n"
    "\tmovq %rax, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $4, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_throw)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_throw) "\n"
    "\tmovq %rax, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $2, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_throw_static_error)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_throw_static_error) "\n"
    "\tmovq %rax, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_profile_will_call)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_profile_will_call) "\n"
    "\tmovq %rax, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $2, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_profile_did_call)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_profile_did_call) "\n"
    "\tmovq %rax, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $2, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_debug)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_debug) "\n"
    "\tmovq %rax, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $5, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_GLUE_LABEL(llint_native_call_trampoline)
    "\tmovq $0, -8(%r13)\n"                                  // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1671
    "\tmovq 120(%rsp), %rax\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1673
    "\tmovq %r13, 36760(%rax)\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1674
    "\tmovq -40(%r13), %rax\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1675
    "\tmovq -24(%rax), %rdx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1676
    "\tmovq %rdx, -24(%r13)\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1677
    "\tmovq 0(%rsp), %rdx\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1678
    "\tmovq %rdx, -16(%r13)\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1679
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1680
    "\tsubq $8, %rsp\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1681
    "\tmovq -32(%r13), %rsi\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1682
    "\tmovq 24(%rsi), %rdx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1683
    "\tmovq %rax, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1684
    "\tcall *96(%rdx)\n"                                     // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1685
    "\taddq $8, %rsp\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1686
    "\tmovq 120(%rsp), %rbx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1687
    "\tcmpq $0, 43328(%rbx)\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1712
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_nativeCallTrampoline__exception) "\n"
    "\tret\n"                                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1713

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_nativeCallTrampoline__exception)
    "\tpop %rdx\n"                                           // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:198
    "\tmovl -44(%r13), %esi\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1716
    "\tmovq -8(%r13), %r10\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1717
    "\tmovq 96(%r10), %r10\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1718
    "\tmovq 112(%rsp), %rax\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1719
    "\tmovq %r13, 36760(%rax)\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1720
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_throw_from_native_call) "\n"
    "\tmovq %rax, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\tjmp " LOCAL_REFERENCE(llint_throw_from_slow_path_trampoline) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1722

OFFLINE_ASM_GLUE_LABEL(llint_native_construct_trampoline)
    "\tmovq $0, -8(%r13)\n"                                  // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1671
    "\tmovq 120(%rsp), %rax\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1673
    "\tmovq %r13, 36760(%rax)\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1674
    "\tmovq -40(%r13), %rax\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1675
    "\tmovq -24(%rax), %rdx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1676
    "\tmovq %rdx, -24(%r13)\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1677
    "\tmovq 0(%rsp), %rdx\n"                                 // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1678
    "\tmovq %rdx, -16(%r13)\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1679
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1680
    "\tsubq $8, %rsp\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1681
    "\tmovq -32(%r13), %rsi\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1682
    "\tmovq 24(%rsi), %rdx\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1683
    "\tmovq %rax, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1684
    "\tcall *104(%rdx)\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1685
    "\taddq $8, %rsp\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1686
    "\tmovq 120(%rsp), %rbx\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1687
    "\tcmpq $0, 43328(%rbx)\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1712
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_104_nativeCallTrampoline__exception) "\n"
    "\tret\n"                                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1713

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_104_nativeCallTrampoline__exception)
    "\tpop %rdx\n"                                           // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:198
    "\tmovl -44(%r13), %esi\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1716
    "\tmovq -8(%r13), %r10\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1717
    "\tmovq 96(%r10), %r10\n"                                // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1718
    "\tmovq 112(%rsp), %rax\n"                               // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1719
    "\tmovq %r13, 36760(%rax)\n"                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1720
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_throw_from_native_call) "\n"
    "\tmovq %rax, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\tjmp " LOCAL_REFERENCE(llint_throw_from_slow_path_trampoline) "\n" // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1722

OFFLINE_ASM_OPCODE_LABEL(op_get_by_id_chain)
    "\tint $3\n"                                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:1227

OFFLINE_ASM_OPCODE_LABEL(op_get_by_id_custom_chain)
    "\tint $3\n"                                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:1227

OFFLINE_ASM_OPCODE_LABEL(op_get_by_id_custom_proto)
    "\tint $3\n"                                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:1227

OFFLINE_ASM_OPCODE_LABEL(op_get_by_id_custom_self)
    "\tint $3\n"                                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:1227

OFFLINE_ASM_OPCODE_LABEL(op_get_by_id_generic)
    "\tint $3\n"                                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:1227

OFFLINE_ASM_OPCODE_LABEL(op_get_by_id_getter_chain)
    "\tint $3\n"                                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:1227

OFFLINE_ASM_OPCODE_LABEL(op_get_by_id_getter_proto)
    "\tint $3\n"                                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:1227

OFFLINE_ASM_OPCODE_LABEL(op_get_by_id_getter_self)
    "\tint $3\n"                                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:1227

OFFLINE_ASM_OPCODE_LABEL(op_get_by_id_proto)
    "\tint $3\n"                                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:1227

OFFLINE_ASM_OPCODE_LABEL(op_get_by_id_self)
    "\tint $3\n"                                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:1227

OFFLINE_ASM_OPCODE_LABEL(op_get_string_length)
    "\tint $3\n"                                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:1227

OFFLINE_ASM_OPCODE_LABEL(op_put_by_id_generic)
    "\tint $3\n"                                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:1227

OFFLINE_ASM_OPCODE_LABEL(op_put_by_id_replace)
    "\tint $3\n"                                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:1227

OFFLINE_ASM_OPCODE_LABEL(op_put_by_id_transition)
    "\tint $3\n"                                             // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:1227

OFFLINE_ASM_OPCODE_LABEL(op_init_global_const_nop)
    "\taddq $5, %rsi\n"                                      // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_GLUE_LABEL(llint_end)
    "\tmovl %eax, 3148725999\n"                              // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:177
    "\txorq %rax, %rax\n"                                    // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:178
    "\tcall *%rax\n"                                         // /home/deerme/Projects/phantomjs/src/qt/qtwebkit/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:179
OFFLINE_ASM_END
#endif

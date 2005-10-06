/* FEAT900.H    (c) Copyright Jan Jaeger, 2000-2005          */
/*      ESAME feature definitions                */
#if defined(OPTION_900_MODE)
#define _ARCH_900_NAME "ESAME"

/* This file MUST NOT contain #undef statements */
#define FEATURE_4K_STORAGE_KEYS
#define FEATURE_ACCESS_REGISTERS
#define FEATURE_ADDRESS_LIMIT_CHECKING
#define FEATURE_ASN_AND_LX_REUSE
#define FEATURE_BASIC_FP_EXTENSIONS
#define FEATURE_BIMODAL_ADDRESSING
#define FEATURE_BINARY_FLOATING_POINT
#define FEATURE_BRANCH_AND_SET_AUTHORITY
#define FEATURE_BROADCASTED_PURGING
#define FEATURE_CANCEL_IO_FACILITY
#define FEATURE_CALLED_SPACE_IDENTIFICATION
#define FEATURE_CHANNEL_SUBSYSTEM
#define FEATURE_CHECKSUM_INSTRUCTION
#define FEATURE_CHSC
#define FEATURE_COMPARE_AND_MOVE_EXTENDED
#define FEATURE_COMPRESSION
#define FEATURE_CPU_RECONFIG
#define FEATURE_DAT_ENHANCEMENT
//#define FEATURE_DAT_ENHANCEMENT_FACILITY_2                       /*@Z9*/
#define FEATURE_DUAL_ADDRESS_SPACE
#define FEATURE_EMULATE_VM
#define FEATURE_ESAME
//#define FEATURE_ETF2_ENHANCEMENT                                 /*@Z9*/
//#define FEATURE_ETF3_ENHANCEMENT                                 /*@Z9*/
#define FEATURE_EXPANDED_STORAGE
#define FEATURE_EXPEDITED_SIE_SUBSET
#define FEATURE_EXTENDED_IMMEDIATE                               /*@Z9*/
#define FEATURE_EXTENDED_STORAGE_KEYS
#define FEATURE_EXTENDED_TOD_CLOCK
#define FEATURE_EXTENDED_TRANSLATION
#define FEATURE_EXTENDED_TRANSLATION_FACILITY_2
#define FEATURE_EXTENDED_TRANSLATION_FACILITY_3
#define FEATURE_EXTERNAL_INTERRUPT_ASSIST
#define FEATURE_FETCH_PROTECTION_OVERRIDE
#define FEATURE_FPS_EXTENSIONS
#define FEATURE_HERCULES_DIAGCALLS
#define FEATURE_HEXADECIMAL_FLOATING_POINT
#define FEATURE_HFP_EXTENSIONS
#define FEATURE_HFP_MULTIPLY_ADD_SUBTRACT
//#define FEATURE_HFP_UNNORMALIZED_EXTENSION                       /*@Z9*/
#define FEATURE_HYPERVISOR
#define FEATURE_IMMEDIATE_AND_RELATIVE
#define FEATURE_INCORRECT_LENGTH_INDICATION_SUPPRESSION
#define FEATURE_INTERPRETIVE_EXECUTION
#define FEATURE_IO_ASSIST
#define FEATURE_LINKAGE_STACK
#define FEATURE_LOAD_REVERSED
#define FEATURE_LOCK_PAGE
#define FEATURE_LONG_DISPLACEMENT
#define FEATURE_MESSAGE_SECURITY_ASSIST
#define FEATURE_MESSAGE_SECURITY_ASSIST_EXTENSION_1              /*@Z9*/
#define FEATURE_MIDAW                                           /*@Z9*/
#define FEATURE_MOVE_PAGE_FACILITY_2
#define FEATURE_MVS_ASSIST
#define FEATURE_PAGE_PROTECTION
#define FEATURE_PERFORM_LOCKED_OPERATION
#define FEATURE_PER
#define FEATURE_PER2
//#define FEATURE_PER3                                             /*@Z9*/
#define FEATURE_PRIVATE_SPACE
#define FEATURE_PROTECTION_INTERCEPTION_CONTROL
#define FEATURE_QUEUED_DIRECT_IO
#define FEATURE_RESUME_PROGRAM
#define FEATURE_REGION_RELOCATE
//#define FEATURE_SENSE_RUNNING_STATUS                             /*@Z9*/
#define FEATURE_SERVICE_PROCESSOR
#define FEATURE_SQUARE_ROOT
#define FEATURE_STORAGE_KEY_ASSIST
#define FEATURE_STORAGE_PROTECTION_OVERRIDE
//#define FEATURE_STORE_CLOCK_FAST                                 /*@Z9*/
#define FEATURE_STORE_FACILITY_LIST_EXTENDED                     /*@Z9*/
#define FEATURE_STORE_SYSTEM_INFORMATION
#define FEATURE_SUBSPACE_GROUP
#define FEATURE_SUPPRESSION_ON_PROTECTION
#define FEATURE_SYSTEM_CONSOLE
#define FEATURE_TEST_BLOCK
//#define FEATURE_TOD_CLOCK_STEERING                               /*@Z9*/
#define FEATURE_TRACING
#define FEATURE_WAITSTATE_ASSIST

#endif /*defined(OPTION_900_MODE)*/
/* end of FEAT900.H */

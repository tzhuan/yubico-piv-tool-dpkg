/** @file cmdline.h
 *  @brief The header file for the command line option parser
 *  generated by GNU Gengetopt version 2.22.6
 *  http://www.gnu.org/software/gengetopt.
 *  DO NOT modify this file, since it can be overwritten
 *  @author GNU Gengetopt by Lorenzo Bettini */

#ifndef CMDLINE_H
#define CMDLINE_H

/* If we use autoconf.  */
#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <stdio.h> /* for FILE */

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#ifndef CMDLINE_PARSER_PACKAGE
/** @brief the program name (used for printing errors) */
#define CMDLINE_PARSER_PACKAGE PACKAGE
#endif

#ifndef CMDLINE_PARSER_PACKAGE_NAME
/** @brief the complete program name (used for help and version) */
#ifdef PACKAGE_NAME
#define CMDLINE_PARSER_PACKAGE_NAME PACKAGE_NAME
#else
#define CMDLINE_PARSER_PACKAGE_NAME PACKAGE
#endif
#endif

#ifndef CMDLINE_PARSER_VERSION
/** @brief the program version */
#define CMDLINE_PARSER_VERSION VERSION
#endif

enum enum_action { action__NULL = -1, action_arg_version = 0, action_arg_generate, action_arg_setMINUS_mgmMINUS_key, action_arg_reset, action_arg_pinMINUS_retries, action_arg_importMINUS_key, action_arg_importMINUS_certificate, action_arg_setMINUS_chuid, action_arg_requestMINUS_certificate, action_arg_verifyMINUS_pin, action_arg_changeMINUS_pin, action_arg_changeMINUS_puk, action_arg_unblockMINUS_pin, action_arg_selfsignMINUS_certificate, action_arg_deleteMINUS_certificate, action_arg_readMINUS_certificate, action_arg_status, action_arg_testMINUS_signature, action_arg_testMINUS_decipher, action_arg_listMINUS_readers };
enum enum_slot { slot__NULL = -1, slot_arg_9a = 0, slot_arg_9c, slot_arg_9d, slot_arg_9e, slot_arg_82, slot_arg_83, slot_arg_84, slot_arg_85, slot_arg_86, slot_arg_87, slot_arg_88, slot_arg_89, slot_arg_8a, slot_arg_8b, slot_arg_8c, slot_arg_8d, slot_arg_8e, slot_arg_8f, slot_arg_90, slot_arg_91, slot_arg_92, slot_arg_93, slot_arg_94, slot_arg_95 };
enum enum_algorithm { algorithm__NULL = -1, algorithm_arg_RSA1024 = 0, algorithm_arg_RSA2048, algorithm_arg_ECCP256, algorithm_arg_ECCP384 };
enum enum_hash { hash__NULL = -1, hash_arg_SHA1 = 0, hash_arg_SHA256, hash_arg_SHA384, hash_arg_SHA512 };
enum enum_key_format { key_format__NULL = -1, key_format_arg_PEM = 0, key_format_arg_PKCS12, key_format_arg_GZIP, key_format_arg_DER };
enum enum_pin_policy { pin_policy__NULL = -1, pin_policy_arg_never = 0, pin_policy_arg_once, pin_policy_arg_always };
enum enum_touch_policy { touch_policy__NULL = -1, touch_policy_arg_never = 0, touch_policy_arg_always };

/** @brief Where the command line options are stored */
struct gengetopt_args_info
{
  const char *help_help; /**< @brief Print help and exit help description.  */
  const char *full_help_help; /**< @brief Print help, including hidden options, and exit help description.  */
  const char *version_help; /**< @brief Print version and exit help description.  */
  int verbose_arg;	/**< @brief Print more information (default='0').  */
  char * verbose_orig;	/**< @brief Print more information original value given at command line.  */
  const char *verbose_help; /**< @brief Print more information help description.  */
  char * reader_arg;	/**< @brief Only use a matching reader (default='Yubikey').  */
  char * reader_orig;	/**< @brief Only use a matching reader original value given at command line.  */
  const char *reader_help; /**< @brief Only use a matching reader help description.  */
  char * key_arg;	/**< @brief Authentication key to use (default='010203040506070801020304050607080102030405060708').  */
  char * key_orig;	/**< @brief Authentication key to use original value given at command line.  */
  const char *key_help; /**< @brief Authentication key to use help description.  */
  enum enum_action *action_arg;	/**< @brief Action to take.  */
  char ** action_orig;	/**< @brief Action to take original value given at command line.  */
  unsigned int action_min; /**< @brief Action to take's minimum occurreces */
  unsigned int action_max; /**< @brief Action to take's maximum occurreces */
  const char *action_help; /**< @brief Action to take help description.  */
  enum enum_slot slot_arg;	/**< @brief What key slot to operate on.  */
  char * slot_orig;	/**< @brief What key slot to operate on original value given at command line.  */
  const char *slot_help; /**< @brief What key slot to operate on help description.  */
  enum enum_algorithm algorithm_arg;	/**< @brief What algorithm to use (default='RSA2048').  */
  char * algorithm_orig;	/**< @brief What algorithm to use original value given at command line.  */
  const char *algorithm_help; /**< @brief What algorithm to use help description.  */
  enum enum_hash hash_arg;	/**< @brief Hash to use for signatures (default='SHA256').  */
  char * hash_orig;	/**< @brief Hash to use for signatures original value given at command line.  */
  const char *hash_help; /**< @brief Hash to use for signatures help description.  */
  char * new_key_arg;	/**< @brief New authentication key to use.  */
  char * new_key_orig;	/**< @brief New authentication key to use original value given at command line.  */
  const char *new_key_help; /**< @brief New authentication key to use help description.  */
  int pin_retries_arg;	/**< @brief Number of retries before the pin code is blocked.  */
  char * pin_retries_orig;	/**< @brief Number of retries before the pin code is blocked original value given at command line.  */
  const char *pin_retries_help; /**< @brief Number of retries before the pin code is blocked help description.  */
  int puk_retries_arg;	/**< @brief Number of retries before the puk code is blocked.  */
  char * puk_retries_orig;	/**< @brief Number of retries before the puk code is blocked original value given at command line.  */
  const char *puk_retries_help; /**< @brief Number of retries before the puk code is blocked help description.  */
  char * input_arg;	/**< @brief Filename to use as input, - for stdin (default='-').  */
  char * input_orig;	/**< @brief Filename to use as input, - for stdin original value given at command line.  */
  const char *input_help; /**< @brief Filename to use as input, - for stdin help description.  */
  char * output_arg;	/**< @brief Filename to use as output, - for stdout (default='-').  */
  char * output_orig;	/**< @brief Filename to use as output, - for stdout original value given at command line.  */
  const char *output_help; /**< @brief Filename to use as output, - for stdout help description.  */
  enum enum_key_format key_format_arg;	/**< @brief Format of the key being read/written (default='PEM').  */
  char * key_format_orig;	/**< @brief Format of the key being read/written original value given at command line.  */
  const char *key_format_help; /**< @brief Format of the key being read/written help description.  */
  char * password_arg;	/**< @brief Password for decryption of private key file.  */
  char * password_orig;	/**< @brief Password for decryption of private key file original value given at command line.  */
  const char *password_help; /**< @brief Password for decryption of private key file help description.  */
  char * subject_arg;	/**< @brief The subject to use for certificate request.  */
  char * subject_orig;	/**< @brief The subject to use for certificate request original value given at command line.  */
  const char *subject_help; /**< @brief The subject to use for certificate request help description.  */
  char * pin_arg;	/**< @brief Pin/puk code for verification.  */
  char * pin_orig;	/**< @brief Pin/puk code for verification original value given at command line.  */
  const char *pin_help; /**< @brief Pin/puk code for verification help description.  */
  char * new_pin_arg;	/**< @brief New pin/puk code for changing.  */
  char * new_pin_orig;	/**< @brief New pin/puk code for changing original value given at command line.  */
  const char *new_pin_help; /**< @brief New pin/puk code for changing help description.  */
  enum enum_pin_policy pin_policy_arg;	/**< @brief Set pin policy for action generate or import-key.  */
  char * pin_policy_orig;	/**< @brief Set pin policy for action generate or import-key original value given at command line.  */
  const char *pin_policy_help; /**< @brief Set pin policy for action generate or import-key help description.  */
  enum enum_touch_policy touch_policy_arg;	/**< @brief Set touch policy for action generate, import-key or set-mgm-key.  */
  char * touch_policy_orig;	/**< @brief Set touch policy for action generate, import-key or set-mgm-key original value given at command line.  */
  const char *touch_policy_help; /**< @brief Set touch policy for action generate, import-key or set-mgm-key help description.  */
  int sign_flag;	/**< @brief Sign data (default=off).  */
  const char *sign_help; /**< @brief Sign data help description.  */
  
  unsigned int help_given ;	/**< @brief Whether help was given.  */
  unsigned int full_help_given ;	/**< @brief Whether full-help was given.  */
  unsigned int version_given ;	/**< @brief Whether version was given.  */
  unsigned int verbose_given ;	/**< @brief Whether verbose was given.  */
  unsigned int reader_given ;	/**< @brief Whether reader was given.  */
  unsigned int key_given ;	/**< @brief Whether key was given.  */
  unsigned int action_given ;	/**< @brief Whether action was given.  */
  unsigned int slot_given ;	/**< @brief Whether slot was given.  */
  unsigned int algorithm_given ;	/**< @brief Whether algorithm was given.  */
  unsigned int hash_given ;	/**< @brief Whether hash was given.  */
  unsigned int new_key_given ;	/**< @brief Whether new-key was given.  */
  unsigned int pin_retries_given ;	/**< @brief Whether pin-retries was given.  */
  unsigned int puk_retries_given ;	/**< @brief Whether puk-retries was given.  */
  unsigned int input_given ;	/**< @brief Whether input was given.  */
  unsigned int output_given ;	/**< @brief Whether output was given.  */
  unsigned int key_format_given ;	/**< @brief Whether key-format was given.  */
  unsigned int password_given ;	/**< @brief Whether password was given.  */
  unsigned int subject_given ;	/**< @brief Whether subject was given.  */
  unsigned int pin_given ;	/**< @brief Whether pin was given.  */
  unsigned int new_pin_given ;	/**< @brief Whether new-pin was given.  */
  unsigned int pin_policy_given ;	/**< @brief Whether pin-policy was given.  */
  unsigned int touch_policy_given ;	/**< @brief Whether touch-policy was given.  */
  unsigned int sign_given ;	/**< @brief Whether sign was given.  */

} ;

/** @brief The additional parameters to pass to parser functions */
struct cmdline_parser_params
{
  int override; /**< @brief whether to override possibly already present options (default 0) */
  int initialize; /**< @brief whether to initialize the option structure gengetopt_args_info (default 1) */
  int check_required; /**< @brief whether to check that all required options were provided (default 1) */
  int check_ambiguity; /**< @brief whether to check for options already specified in the option structure gengetopt_args_info (default 0) */
  int print_errors; /**< @brief whether getopt_long should print an error message for a bad option (default 1) */
} ;

/** @brief the purpose string of the program */
extern const char *gengetopt_args_info_purpose;
/** @brief the usage string of the program */
extern const char *gengetopt_args_info_usage;
/** @brief the description string of the program */
extern const char *gengetopt_args_info_description;
/** @brief all the lines making the help output */
extern const char *gengetopt_args_info_help[];
/** @brief all the lines making the full help output (including hidden options) */
extern const char *gengetopt_args_info_full_help[];

/**
 * The command line parser
 * @param argc the number of command line options
 * @param argv the command line options
 * @param args_info the structure where option information will be stored
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int cmdline_parser (int argc, char **argv,
  struct gengetopt_args_info *args_info);

/**
 * The command line parser (version with additional parameters - deprecated)
 * @param argc the number of command line options
 * @param argv the command line options
 * @param args_info the structure where option information will be stored
 * @param override whether to override possibly already present options
 * @param initialize whether to initialize the option structure my_args_info
 * @param check_required whether to check that all required options were provided
 * @return 0 if everything went fine, NON 0 if an error took place
 * @deprecated use cmdline_parser_ext() instead
 */
int cmdline_parser2 (int argc, char **argv,
  struct gengetopt_args_info *args_info,
  int override, int initialize, int check_required);

/**
 * The command line parser (version with additional parameters)
 * @param argc the number of command line options
 * @param argv the command line options
 * @param args_info the structure where option information will be stored
 * @param params additional parameters for the parser
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int cmdline_parser_ext (int argc, char **argv,
  struct gengetopt_args_info *args_info,
  struct cmdline_parser_params *params);

/**
 * Save the contents of the option struct into an already open FILE stream.
 * @param outfile the stream where to dump options
 * @param args_info the option struct to dump
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int cmdline_parser_dump(FILE *outfile,
  struct gengetopt_args_info *args_info);

/**
 * Save the contents of the option struct into a (text) file.
 * This file can be read by the config file parser (if generated by gengetopt)
 * @param filename the file where to save
 * @param args_info the option struct to save
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int cmdline_parser_file_save(const char *filename,
  struct gengetopt_args_info *args_info);

/**
 * Print the help
 */
void cmdline_parser_print_help(void);
/**
 * Print the full help (including hidden options)
 */
void cmdline_parser_print_full_help(void);
/**
 * Print the version
 */
void cmdline_parser_print_version(void);

/**
 * Initializes all the fields a cmdline_parser_params structure 
 * to their default values
 * @param params the structure to initialize
 */
void cmdline_parser_params_init(struct cmdline_parser_params *params);

/**
 * Allocates dynamically a cmdline_parser_params structure and initializes
 * all its fields to their default values
 * @return the created and initialized cmdline_parser_params structure
 */
struct cmdline_parser_params *cmdline_parser_params_create(void);

/**
 * Initializes the passed gengetopt_args_info structure's fields
 * (also set default values for options that have a default)
 * @param args_info the structure to initialize
 */
void cmdline_parser_init (struct gengetopt_args_info *args_info);
/**
 * Deallocates the string fields of the gengetopt_args_info structure
 * (but does not deallocate the structure itself)
 * @param args_info the structure to deallocate
 */
void cmdline_parser_free (struct gengetopt_args_info *args_info);

/**
 * Checks that all the required options were specified
 * @param args_info the structure to check
 * @param prog_name the name of the program that will be used to print
 *   possible errors
 * @return
 */
int cmdline_parser_required (struct gengetopt_args_info *args_info,
  const char *prog_name);

extern const char *cmdline_parser_action_values[];  /**< @brief Possible values for action. */
extern const char *cmdline_parser_slot_values[];  /**< @brief Possible values for slot. */
extern const char *cmdline_parser_algorithm_values[];  /**< @brief Possible values for algorithm. */
extern const char *cmdline_parser_hash_values[];  /**< @brief Possible values for hash. */
extern const char *cmdline_parser_key_format_values[];  /**< @brief Possible values for key-format. */
extern const char *cmdline_parser_pin_policy_values[];  /**< @brief Possible values for pin-policy. */
extern const char *cmdline_parser_touch_policy_values[];  /**< @brief Possible values for touch-policy. */


#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* CMDLINE_H */

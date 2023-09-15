# 1 "d:\\dev\\qa_school\\test_script_vers_01\\\\combined_test_chrome_copy.c"
# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h" 1
 
 












 











# 103 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"





















































		


		typedef unsigned size_t;
	
	
        
	

















	

 



















 
 
 
 
 


 
 
 
 
 
 














int     lr_start_transaction   (char * transaction_name);
int lr_start_sub_transaction          (char * transaction_name, char * trans_parent);
long lr_start_transaction_instance    (char * transaction_name, long parent_handle);
int   lr_start_cross_vuser_transaction		(char * transaction_name, char * trans_id_param); 



int     lr_end_transaction     (char * transaction_name, int status);
int lr_end_sub_transaction            (char * transaction_name, int status);
int lr_end_transaction_instance       (long transaction, int status);
int   lr_end_cross_vuser_transaction	(char * transaction_name, char * trans_id_param, int status);


 
typedef char* lr_uuid_t;
 



lr_uuid_t lr_generate_uuid();

 


int lr_generate_uuid_free(lr_uuid_t uuid);

 



int lr_generate_uuid_on_buf(lr_uuid_t buf);

   
# 273 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int lr_start_distributed_transaction  (char * transaction_name, lr_uuid_t correlator, long timeout  );

   







int lr_end_distributed_transaction  (lr_uuid_t correlator, int status);


double lr_stop_transaction            (char * transaction_name);
double lr_stop_transaction_instance   (long parent_handle);


void lr_resume_transaction           (char * trans_name);
void lr_resume_transaction_instance  (long trans_handle);


int lr_update_transaction            (const char *trans_name);


 
void lr_wasted_time(long time);


 
int lr_set_transaction(const char *name, double duration, int status);
 
long lr_set_transaction_instance(const char *name, double duration, int status, long parent_handle);


int   lr_user_data_point                      (char *, double);
long lr_user_data_point_instance                   (char *, double, long);
 



int lr_user_data_point_ex(const char *dp_name, double value, int log_flag);
long lr_user_data_point_instance_ex(const char *dp_name, double value, long parent_handle, int log_flag);


int lr_transaction_add_info      (const char *trans_name, char *info);
int lr_transaction_instance_add_info   (long trans_handle, char *info);
int lr_dpoint_add_info           (const char *dpoint_name, char *info);
int lr_dpoint_instance_add_info        (long dpoint_handle, char *info);


double lr_get_transaction_duration       (char * trans_name);
double lr_get_trans_instance_duration    (long trans_handle);
double lr_get_transaction_think_time     (char * trans_name);
double lr_get_trans_instance_think_time  (long trans_handle);
double lr_get_transaction_wasted_time    (char * trans_name);
double lr_get_trans_instance_wasted_time (long trans_handle);
int    lr_get_transaction_status		 (char * trans_name);
int	   lr_get_trans_instance_status		 (long trans_handle);

 



int lr_set_transaction_status(int status);

 



int lr_set_transaction_status_by_name(int status, const char *trans_name);
int lr_set_transaction_instance_status(int status, long trans_handle);


typedef void* merc_timer_handle_t;
 

merc_timer_handle_t lr_start_timer();
double lr_end_timer(merc_timer_handle_t timer_handle);


 
 
 
 
 
 











 



int   lr_rendezvous  (char * rendezvous_name);
 




int   lr_rendezvous_ex (char * rendezvous_name);



 
 
 
 
 
char *lr_get_vuser_ip (void);
void   lr_whoami (int *vuser_id, char ** sgroup, int *scid);
char *	  lr_get_host_name (void);
char *	  lr_get_master_host_name (void);

 
long     lr_get_attrib_long	(char * attr_name);
char *   lr_get_attrib_string	(char * attr_name);
double   lr_get_attrib_double      (char * attr_name);

char * lr_paramarr_idx(const char * paramArrayName, unsigned int index);
char * lr_paramarr_random(const char * paramArrayName);
int    lr_paramarr_len(const char * paramArrayName);

int	lr_param_unique(const char * paramName);
int lr_param_sprintf(const char * paramName, const char * format, ...);


 
 
static void *ci_this_context = 0;






 








void lr_continue_on_error (int lr_continue);
char *   lr_unmask (const char *EncodedString);
char *   lr_decrypt (const char *EncodedString);


 
 
 
 
 
 



 







 















void   lr_abort (void);
void lr_exit(int exit_option, int exit_status);
void lr_abort_ex (unsigned long flags);

void   lr_peek_events (void);


 
 
 
 
 


void   lr_think_time (double secs);

 


void lr_force_think_time (double secs);


 
 
 
 
 



















int   lr_msg (char * fmt, ...);
int   lr_debug_message (unsigned int msg_class,
									    char * format,
										...);
# 513 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_new_prefix (int type,
                                 char * filename,
                                 int line);
# 516 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int   lr_log_message (char * fmt, ...);
int   lr_message (char * fmt, ...);
int   lr_error_message (char * fmt, ...);
int   lr_output_message (char * fmt, ...);
int   lr_vuser_status_message (char * fmt, ...);
int   lr_error_message_without_fileline (char * fmt, ...);
int   lr_fail_trans_with_error (char * fmt, ...);

 
 
 
 
 
# 540 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

 
 
 
 
 





int   lr_next_row ( char * table);
int lr_advance_param ( char * param);



														  
														  

														  
														  

													      
 


char *   lr_eval_string (char * str);
int   lr_eval_string_ext (const char *in_str,
                                     unsigned long const in_len,
                                     char ** const out_str,
                                     unsigned long * const out_len,
                                     unsigned long const options,
                                     const char *file,
								     long const line);
# 574 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_eval_string_ext_free (char * * pstr);

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
int lr_param_increment (char * dst_name,
                              char * src_name);
# 597 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"













											  
											  

											  
											  
											  

int	  lr_save_var (char *              param_val,
							  unsigned long const param_val_len,
							  unsigned long const options,
							  char *			  param_name);
# 621 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int   lr_save_string (const char * param_val, const char * param_name);



int   lr_set_custom_error_message (const char * param_val, ...);

int   lr_remove_custom_error_message ();


int   lr_free_parameter (const char * param_name);
int   lr_save_int (const int param_val, const char * param_name);
int   lr_save_timestamp (const char * tmstampParam, ...);
int   lr_save_param_regexp (const char *bufferToScan, unsigned int bufSize, ...);

int   lr_convert_double_to_integer (const char *source_param_name, const char * target_param_name);
int   lr_convert_double_to_double (const char *source_param_name, const char *format_string, const char * target_param_name);

 
 
 
 
 
 
# 700 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_save_datetime (const char *format, int offset, const char *name);









 











 
 
 
 
 






 



char * lr_error_context_get_entry (char * key);

 



long   lr_error_context_get_error_id (void);


 
 
 

int lr_table_get_rows_num (char * param_name);

int lr_table_get_cols_num (char * param_name);

char * lr_table_get_cell_by_col_index (char * param_name, int row, int col);

char * lr_table_get_cell_by_col_name (char * param_name, int row, const char* col_name);

int lr_table_get_column_name_by_index (char * param_name, int col, 
											char * * const col_name,
											size_t * col_name_len);
# 761 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

int lr_table_get_column_name_by_index_free (char * col_name);

 
 
 
 
# 776 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int   lr_zip (const char* param1, const char* param2);
int   lr_unzip (const char* param1, const char* param2);

 
 
 
 
 
 
 
 

 
 
 
 
 
 
int   lr_param_substit (char * file,
                                   int const line,
                                   char * in_str,
                                   size_t const in_len,
                                   char * * const out_str,
                                   size_t * const out_len);
# 800 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_param_substit_free (char * * pstr);


 
# 812 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"





char *   lrfnc_eval_string (char * str,
                                      char * file_name,
                                      long const line_num);
# 820 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"


int   lrfnc_save_string ( const char * param_val,
                                     const char * param_name,
                                     const char * file_name,
                                     long const line_num);
# 826 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

int   lrfnc_free_parameter (const char * param_name );







typedef struct _lr_timestamp_param
{
	int iDigits;
}lr_timestamp_param;

extern const lr_timestamp_param default_timestamp_param;

int   lrfnc_save_timestamp (const char * param_name, const lr_timestamp_param* time_param);

int lr_save_searched_string(char * buffer, long buf_size, unsigned int occurrence,
			    char * search_string, int offset, unsigned int param_val_len, 
			    char * param_name);

 
char *   lr_string (char * str);

 
# 929 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

int   lr_save_value (char * param_val,
                                unsigned long const param_val_len,
                                unsigned long const options,
                                char * param_name,
                                char * file_name,
                                long const line_num);
# 936 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"


 
 
 
 
 











int   lr_printf (char * fmt, ...);
 
int   lr_set_debug_message (unsigned int msg_class,
                                       unsigned int swtch);
# 958 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
unsigned int   lr_get_debug_message (void);


 
 
 
 
 

void   lr_double_think_time ( double secs);
void   lr_usleep (long);


 
 
 
 
 
 




int *   lr_localtime (long offset);


int   lr_send_port (long port);


# 1034 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"



struct _lr_declare_identifier{
	char signature[24];
	char value[128];
};

int   lr_pt_abort (void);

void vuser_declaration (void);






# 1063 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"


# 1075 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
















 
 
 
 
 







int    _lr_declare_transaction   (char * transaction_name);


 
 
 
 
 







int   _lr_declare_rendezvous  (char * rendezvous_name);

 
 
 
 
 


typedef int PVCI;






typedef int VTCERR;









PVCI   vtc_connect(char * servername, int portnum, int options);
VTCERR   vtc_disconnect(PVCI pvci);
VTCERR   vtc_get_last_error(PVCI pvci);
VTCERR   vtc_query_column(PVCI pvci, char * columnName, int columnIndex, char * *outvalue);
VTCERR   vtc_query_row(PVCI pvci, int rowIndex, char * **outcolumns, char * **outvalues);
VTCERR   vtc_send_message(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_if_unique(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_row1(PVCI pvci, char * columnNames, char * messages, char * delimiter, unsigned char sendflag, unsigned short *outUpdates);
VTCERR   vtc_search_row(PVCI pvci, char * columnNames, char * messages, char * delimiter, char * **outcolumns, char * **outvalues);
VTCERR   vtc_update_message(PVCI pvci, char * column, int index , char * message, unsigned short *outRc);
VTCERR   vtc_update_message_ifequals(PVCI pvci, char * columnName, int index,	char * message, char * ifmessage, unsigned short 	*outRc);
VTCERR   vtc_update_row1(PVCI pvci, char * columnNames, int index , char * messages, char * delimiter, unsigned short *outUpdates);
VTCERR   vtc_retrieve_message(PVCI pvci, char * column, char * *outvalue);
VTCERR   vtc_retrieve_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues);
VTCERR   vtc_retrieve_row(PVCI pvci, char * **outcolumns, char * **outvalues);
VTCERR   vtc_rotate_message(PVCI pvci, char * column, char * *outvalue, unsigned char sendflag);
VTCERR   vtc_rotate_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_rotate_row(PVCI pvci, char * **outcolumns, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_increment(PVCI pvci, char * column, int index , int incrValue, int *outValue);
VTCERR   vtc_clear_message(PVCI pvci, char * column, int index , unsigned short *outRc);
VTCERR   vtc_clear_column(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_ensure_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_drop_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_clear_row(PVCI pvci, int rowIndex, unsigned short *outRc);
VTCERR   vtc_create_column(PVCI pvci, char * column,unsigned short *outRc);
VTCERR   vtc_column_size(PVCI pvci, char * column, int *size);
void   vtc_free(char * msg);
void   vtc_free_list(char * *msglist);
VTCERR   vtc_update_all_message_ifequals(PVCI pvci, char * columnNames, char * message, char * ifmessage, char * delimiter, unsigned short *outRc);

VTCERR   lrvtc_connect(char * servername, int portnum, int options);
VTCERR   lrvtc_connect_ex(char * vtc_first_param, ...);
VTCERR   lrvtc_connect_ex_no_ellipsis(const char *vtc_first_param, char ** arguments, int argCount);
VTCERR   lrvtc_disconnect();
VTCERR   lrvtc_query_column(char * columnName, int columnIndex);
VTCERR   lrvtc_query_row(int columnIndex);
VTCERR   lrvtc_send_message(char * columnName, char * message);
VTCERR   lrvtc_send_if_unique(char * columnName, char * message);
VTCERR   lrvtc_send_row1(char * columnNames, char * messages, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_search_row(char * columnNames, char * messages, char * delimiter);
VTCERR   lrvtc_update_message(char * columnName, int index , char * message);
VTCERR   lrvtc_update_message_ifequals(char * columnName, int index, char * message, char * ifmessage);
VTCERR   lrvtc_update_row1(char * columnNames, int index , char * messages, char * delimiter);
VTCERR   lrvtc_retrieve_message(char * columnName);
VTCERR   lrvtc_retrieve_messages1(char * columnNames, char * delimiter);
VTCERR   lrvtc_retrieve_row();
VTCERR   lrvtc_rotate_message(char * columnName, unsigned char sendflag);
VTCERR   lrvtc_rotate_messages1(char * columnNames, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_rotate_row(unsigned char sendflag);
VTCERR   lrvtc_increment(char * columnName, int index , int incrValue);
VTCERR   lrvtc_noop();
VTCERR   lrvtc_clear_message(char * columnName, int index);
VTCERR   lrvtc_clear_column(char * columnName); 
VTCERR   lrvtc_ensure_index(char * columnName); 
VTCERR   lrvtc_drop_index(char * columnName); 
VTCERR   lrvtc_clear_row(int rowIndex);
VTCERR   lrvtc_create_column(char * columnName);
VTCERR   lrvtc_column_size(char * columnName);
VTCERR   lrvtc_update_all_message_ifequals(char * columnNames, char * message, char * ifmessage, char * delimiter);



 
 
 
 
 

 
int lr_enable_ip_spoofing();
int lr_disable_ip_spoofing();


 




int lr_convert_string_encoding(char * sourceString, char * fromEncoding, char * toEncoding, char * paramName);
int lr_read_file(const char *filename, const char *outputParam, int continueOnError);

int lr_get_char_count(const char * string);


 
int lr_db_connect (char * pFirstArg, ...);
int lr_db_disconnect (char * pFirstArg,	...);
int lr_db_executeSQLStatement (char * pFirstArg, ...);
int lr_db_dataset_action(char * pFirstArg, ...);
int lr_checkpoint(char * pFirstArg,	...);
int lr_db_getvalue(char * pFirstArg, ...);







 
 



















# 1 "d:\\dev\\qa_school\\test_script_vers_01\\\\combined_test_chrome_copy.c" 2

# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/SharedParameter.h" 1



 
 
 
 
# 100 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/SharedParameter.h"






typedef int PVCI2;






typedef int VTCERR2;


 
 
 

 
extern PVCI2    vtc_connect(char *servername, int portnum, int options);
extern VTCERR2  vtc_disconnect(PVCI2 pvci);
extern VTCERR2  vtc_get_last_error(PVCI2 pvci);

 
extern VTCERR2  vtc_query_column(PVCI2 pvci, char *columnName, int columnIndex, char **outvalue);
extern VTCERR2  vtc_query_row(PVCI2 pvci, int columnIndex, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_send_message(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_if_unique(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_row1(PVCI2 pvci, char *columnNames, char *messages, char *delimiter,  unsigned char sendflag, unsigned short *outUpdates);
extern VTCERR2  vtc_search_row(PVCI2 pvci, char *columnNames, char *messages, char *delimiter, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_update_message(PVCI2 pvci, char *column, int index , char *message, unsigned short *outRc);
extern VTCERR2  vtc_update_message_ifequals(PVCI2 pvci, char	*columnName, int index,	char *message, char	*ifmessage,	unsigned short 	*outRc);
extern VTCERR2  vtc_update_row1(PVCI2 pvci, char *columnNames, int index , char *messages, char *delimiter, unsigned short *outUpdates);
extern VTCERR2  vtc_retrieve_message(PVCI2 pvci, char *column, char **outvalue);
extern VTCERR2  vtc_retrieve_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues);
extern VTCERR2  vtc_retrieve_row(PVCI2 pvci, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_rotate_message(PVCI2 pvci, char *column, char **outvalue, unsigned char sendflag);
extern VTCERR2  vtc_rotate_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues, unsigned char sendflag);
extern VTCERR2  vtc_rotate_row(PVCI2 pvci, char ***outcolumns, char ***outvalues, unsigned char sendflag);
extern VTCERR2	vtc_increment(PVCI2 pvci, char *column, int index , int incrValue, int *outValue);
extern VTCERR2  vtc_clear_message(PVCI2 pvci, char *column, int index , unsigned short *outRc);
extern VTCERR2  vtc_clear_column(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_clear_row(PVCI2 pvci, int rowIndex, unsigned short *outRc);

extern VTCERR2  vtc_create_column(PVCI2 pvci, char *column,unsigned short *outRc);
extern VTCERR2  vtc_column_size(PVCI2 pvci, char *column, int *size);
extern VTCERR2  vtc_ensure_index(PVCI2 pvci, char *column, unsigned short *outRc);
extern VTCERR2  vtc_drop_index(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_noop(PVCI2 pvci);

 
extern void vtc_free(char *msg);
extern void vtc_free_list(char **msglist);

 


 




 




















 




 
 
 

extern VTCERR2  lrvtc_connect(char *servername, int portnum, int options);
 
 
extern VTCERR2  lrvtc_disconnect();
extern VTCERR2  lrvtc_query_column(char *columnName, int columnIndex);
extern VTCERR2  lrvtc_query_row(int columnIndex);
extern VTCERR2  lrvtc_send_message(char *columnName, char *message);
extern VTCERR2  lrvtc_send_if_unique(char *columnName, char *message);
extern VTCERR2  lrvtc_send_row1(char *columnNames, char *messages, char *delimiter,  unsigned char sendflag);
extern VTCERR2  lrvtc_search_row(char *columnNames, char *messages, char *delimiter);
extern VTCERR2  lrvtc_update_message(char *columnName, int index , char *message);
extern VTCERR2  lrvtc_update_message_ifequals(char *columnName, int index, char 	*message, char *ifmessage);
extern VTCERR2  lrvtc_update_row1(char *columnNames, int index , char *messages, char *delimiter);
extern VTCERR2  lrvtc_retrieve_message(char *columnName);
extern VTCERR2  lrvtc_retrieve_messages1(char *columnNames, char *delimiter);
extern VTCERR2  lrvtc_retrieve_row();
extern VTCERR2  lrvtc_rotate_message(char *columnName, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_messages1(char *columnNames, char *delimiter, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_row(unsigned char sendflag);
extern VTCERR2  lrvtc_increment(char *columnName, int index , int incrValue);
extern VTCERR2  lrvtc_clear_message(char *columnName, int index);
extern VTCERR2  lrvtc_clear_column(char *columnName);
extern VTCERR2  lrvtc_clear_row(int rowIndex);
extern VTCERR2  lrvtc_create_column(char *columnName);
extern VTCERR2  lrvtc_column_size(char *columnName);
extern VTCERR2  lrvtc_ensure_index(char *columnName);
extern VTCERR2  lrvtc_drop_index(char *columnName);

extern VTCERR2  lrvtc_noop();

 
 
 

                               


 
 
 





















# 2 "d:\\dev\\qa_school\\test_script_vers_01\\\\combined_test_chrome_copy.c" 2

# 1 "globals.h" 1



 
 

# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/web_api.h" 1







# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h" 1



























































 




 



 











 





















 
 
 

  int
	web_add_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_add_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
	
  int
	web_add_auto_header(
		const char *		mpszHeader,
		const char *		mpszValue);

  int
	web_add_header(
		const char *		mpszHeader,
		const char *		mpszValue);
  int
	web_add_cookie(
		const char *		mpszCookie);
  int
	web_cleanup_auto_headers(void);
  int
	web_cleanup_cookies(void);
  int
	web_concurrent_end(
		const char * const	mpszReserved,
										 
		...								 
	);
  int
	web_concurrent_start(
		const char * const	mpszConcurrentGroupName,
										 
										 
		...								 
										 
	);
  int
	web_create_html_param(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim);
  int
	web_create_html_param_ex(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim,
		const char *		mpszNum);
  int
	web_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_disable_keep_alive(void);
  int
	web_enable_keep_alive(void);
  int
	web_find(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_get_int_property(
		const int			miHttpInfoType);
  int
	web_image(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_image_check(
		const char *		mpszName,
		...);
  int
	web_java_check(
		const char *		mpszName,
		...);
  int
	web_link(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

	
  int
	web_global_verification(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
  int
	web_reg_find(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
				
  int
	web_reg_save_param(
		const char *		mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 

  int
	web_convert_param(
		const char * 		mpszParamName, 
										 
		...);							 
										 
										 


										 

										 
  int
	web_remove_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
				
  int
	web_remove_auto_header(
		const char *		mpszHeaderName,
		...);							 
										 



  int
	web_remove_cookie(
		const char *		mpszCookie);

  int
	web_save_header(
		const char *		mpszType,	 
		const char *		mpszName);	 
  int
	web_set_certificate(
		const char *		mpszIndex);
  int
	web_set_certificate_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_set_connections_limit(
		const char *		mpszLimit);
  int
	web_set_max_html_param_len(
		const char *		mpszLen);
  int
	web_set_max_retries(
		const char *		mpszMaxRetries);
  int
	web_set_proxy(
		const char *		mpszProxyHost);
  int
	web_set_pac(
		const char *		mpszPacUrl);
  int
	web_set_proxy_bypass(
		const char *		mpszBypass);
  int
	web_set_secure_proxy(
		const char *		mpszProxyHost);
  int
	web_set_sockets_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue
	);
  int
	web_set_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue,
		...								 
	);
  int
	web_set_timeout(
		const char *		mpszWhat,
		const char *		mpszTimeout);
  int
	web_set_user(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);

  int
	web_sjis_to_euc_param(
		const char *		mpszParamName,
										 
		const char *		mpszParamValSjis);
										 

  int
	web_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_submit_form(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	spdy_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_set_proxy_bypass_local(
		const char * mpszNoLocal
		);

  int 
	web_cache_cleanup(void);

  int
	web_create_html_query(
		const char* mpszStartQuery,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_create_radio_button_param(
		const char *NameFiled,
		const char *NameAndVal,
		const char *ParamName
		);

  int
	web_convert_from_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										
  int
	web_convert_to_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_ex(
		const char * mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_xpath(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_json(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_regexp(
		 const char * mpszParamName,
		 ...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_attrib(
		const char * mpszParamName,
		...);
										 
										 
										 
										 
										 
										 
										 		
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_run(
		const char * mpszCode,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_reset(void);

  int
	web_convert_date_param(
		const char * 		mpszParamName,
		...);










# 789 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"


# 802 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"



























# 840 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"

 
 
 


  int
	FormSubmit(
		const char *		mpszFormName,
		...);
  int
	InitWebVuser(void);
  int
	SetUser(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);
  int
	TerminateWebVuser(void);
  int
	URL(
		const char *		mpszUrlName);
























# 908 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"


  int
	web_rest(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 

  int
web_stream_open(
	const char *		mpszArg1,
	...
);
  int
	web_stream_wait(
		const char *		mpszArg1,
		...
	);

  int
	web_stream_close(
		const char *		mpszArg1,
		...
	);

  int
web_stream_play(
	const char *		mpszArg1,
	...
	);

  int
web_stream_pause(
	const char *		mpszArg1,
	...
	);

  int
web_stream_seek(
	const char *		mpszArg1,
	...
	);

  int
web_stream_get_param_int(
	const char*			mpszStreamID,
	const int			miStateType
	);

  double
web_stream_get_param_double(
	const char*			mpszStreamID,
	const int			miStateType
	);

  int
web_stream_get_param_string(
	const char*			mpszStreamID,
	const int			miStateType,
	const char*			mpszParameterName
	);

  int
web_stream_set_param_int(
	const char*			mpszStreamID,
	const int			miStateType,
	const int			miStateValue
	);

  int
web_stream_set_param_double(
	const char*			mpszStreamID,
	const int			miStateType,
	const double		mdfStateValue
	);

  int
web_stream_set_custom_mpd(
	const char*			mpszStreamID,
	const char*			aMpdBuf
	);

 
 
 






# 9 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/web_api.h" 2

















 







 















  int
	web_reg_add_cookie(
		const char *		mpszCookie,
		...);							 
										 

  int
	web_report_data_point(
		const char *		mpszEventType,
		const char *		mpszEventName,
		const char *		mpszDataPointName,
		const char *		mpszLAST);	 
										 
										 
										 

  int
	web_text_link(
		const char *		mpszStepName,
		...);

  int
	web_element(
		const char *		mpszStepName,
		...);

  int
	web_image_link(
		const char *		mpszStepName,
		...);

  int
	web_static_image(
		const char *		mpszStepName,
		...);

  int
	web_image_submit(
		const char *		mpszStepName,
		...);

  int
	web_button(
		const char *		mpszStepName,
		...);

  int
	web_edit_field(
		const char *		mpszStepName,
		...);

  int
	web_radio_group(
		const char *		mpszStepName,
		...);

  int
	web_check_box(
		const char *		mpszStepName,
		...);

  int
	web_list(
		const char *		mpszStepName,
		...);

  int
	web_text_area(
		const char *		mpszStepName,
		...);

  int
	web_map_area(
		const char *		mpszStepName,
		...);

  int
	web_eval_java_script(
		const char *		mpszStepName,
		...);

  int
	web_reg_dialog(
		const char *		mpszArg1,
		...);

  int
	web_reg_cross_step_download(
		const char *		mpszArg1,
		...);

  int
	web_browser(
		const char *		mpszStepName,
		...);

  int
	web_control(
		const char *		mpszStepName,
		...);

  int
	web_set_rts_key(
		const char *		mpszArg1,
		...);

  int
	web_save_param_length(
		const char * 		mpszParamName,
		...);

  int
	web_save_timestamp_param(
		const char * 		mpszParamName,
		...);

  int
	web_load_cache(
		const char *		mpszStepName,
		...);							 
										 

  int
	web_dump_cache(
		const char *		mpszStepName,
		...);							 
										 
										 

  int
	web_reg_find_in_log(
		const char *		mpszArg1,
		...);							 
										 
										 

  int
	web_get_sockets_info(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 

  int
	web_add_cookie_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

  int
	web_hook_java_script(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

 
 
 
 
 
 
 
 
 
 
 
 
  int
	web_reg_async_attributes(
		const char *		mpszArg,
		...
	);

 
 
 
 
 
 
  int
	web_sync(
		 const char *		mpszArg1,
		 ...
	);

 
 
 
 
  int
	web_stop_async(
		const char *		mpszArg1,
		...
	);

 
 
 
 
 

 
 
 

typedef enum WEB_ASYNC_CB_RC_ENUM_T
{
	WEB_ASYNC_CB_RC_OK,				 

	WEB_ASYNC_CB_RC_ABORT_ASYNC_NOT_ERROR,
	WEB_ASYNC_CB_RC_ABORT_ASYNC_ERROR,
										 
										 
										 
										 
	WEB_ASYNC_CB_RC_ENUM_COUNT
} WEB_ASYNC_CB_RC_ENUM;

 
 
 

typedef enum WEB_CONVERS_CB_CALL_REASON_ENUM_T
{
	WEB_CONVERS_CB_CALL_REASON_BUFFER_RECEIVED,
	WEB_CONVERS_CB_CALL_REASON_END_OF_TASK,

	WEB_CONVERS_CB_CALL_REASON_ENUM_COUNT
} WEB_CONVERS_CB_CALL_REASON_ENUM;

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

typedef
int														 
	(*RequestCB_t)();

typedef
int														 
	(*ResponseBodyBufferCB_t)(
		  const char *		aLastBufferStr,
		  int				aLastBufferLen,
		  const char *		aAccumulatedStr,
		  int				aAccumulatedLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseCB_t)(
		  const char *		aResponseHeadersStr,
		  int				aResponseHeadersLen,
		  const char *		aResponseBodyStr,
		  int				aResponseBodyLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseHeadersCB_t)(
		  int				aHttpStatusCode,
		  const char *		aAccumulatedHeadersStr,
		  int				aAccumulatedHeadersLen);



 
 
 

typedef enum WEB_CONVERS_UTIL_RC_ENUM_T
{
	WEB_CONVERS_UTIL_RC_OK,
	WEB_CONVERS_UTIL_RC_CONVERS_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_TASK_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_UNAVIALABLE,
	WEB_CONVERS_UTIL_RC_INVALID_ARGUMENT,

	WEB_CONVERS_UTIL_RC_ENUM_COUNT
} WEB_CONVERS_UTIL_RC_ENUM;

 
 
 

  int					 
	web_util_set_request_url(
		  const char *		aUrlStr);

  int					 
	web_util_set_request_body(
		  const char *		aRequestBodyStr);

  int					 
	web_util_set_formatted_request_body(
		  const char *		aRequestBodyStr);


 
 
 
 
 

 
 
 
 
 

 
 
 
 
 
 
 
 

 
 
  int
web_websocket_connect(
		 const char *	mpszArg1,
		 ...
		 );


 
 
 
 
 																						
  int
web_websocket_send(
	   const char *		mpszArg1,
		...
	   );

 
 
 
 
 
 
  int
web_websocket_close(
		const char *	mpszArg1,
		...
		);

 
typedef
void														
(*OnOpen_t)(
			  const char* connectionID,  
			  const char * responseHeader,  
			  int length  
);

typedef
void														
(*OnMessage_t)(
	  const char* connectionID,  
	  int isbinary,  
	  const char * data,  
	  int length  
	);

typedef
void														
(*OnError_t)(
	  const char* connectionID,  
	  const char * message,  
	  int length  
	);

typedef
void														
(*OnClose_t)(
	  const char* connectionID,  
	  int isClosedByClient,  
	  int code,  
	  const char* reason,  
	  int length  
	 );
 
 
 
 
 





# 7 "globals.h" 2

# 1 "lrw_custom_body.h" 1
 




# 8 "globals.h" 2



 
 



# 3 "d:\\dev\\qa_school\\test_script_vers_01\\\\combined_test_chrome_copy.c" 2

# 1 "vuser_init.c" 1
 







vuser_init()
{


	return 0;
}
# 4 "d:\\dev\\qa_school\\test_script_vers_01\\\\combined_test_chrome_copy.c" 2

# 1 "Action.c" 1
Action()
	
{

    char* x_num = lr_eval_string("{custom_iteration_num}");
    int send_iter_num = atoi(x_num);
    int i;

	lr_start_transaction("01_get_start_url");

	web_set_sockets_option("SSL_VERSION", "AUTO");

 





	web_reg_save_param_regexp(
		"ParamName=act_token",
		"RegExp=\"?(?:act|CSRF|csrf)(?:Token)?\"?(?:=|:)\\s?\"?(.*?)\"?[,;}]",
		"LAST");

	web_url("mail.ru",
		"URL=https://mail.ru/",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=",
		"Snapshot=t122.inf",
		"Mode=HTML");

	web_reg_find("Search=Body",
	            "Text=Регистрация",
	            "LAST");

	lr_end_transaction("01_get_start_url",2);

	lr_start_transaction("02_login");

	web_url("login",
		"URL=https://account.mail.ru/login/?mode=simple&v=2.10.0&account_host=account.mail.ru&type=login&allow_external=1&app_id_mytracker=58519&success_redirect=https%3A%2F%2Fe.mail.ru%2Fmessages%2Finbox%3Fback%3D1&project=home&source=mailbox&from=navi&parent_url=https%3A%2F%2Fmail.ru%2F&responsive=compact",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://mail.ru/",
		"Snapshot=t140.inf",
		"Mode=HTML",
		"LAST");

	 

	web_submit_data("info",
		"Action=https://auth.mail.ru/api/v1/pushauth/info",
		"Method=POST",
		"EncType=multipart/form-data",
		"TargetFrame=",
		"RecContentType=application/json",
		"Referer=https://account.mail.ru/",
		"Snapshot=t144.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=login", "Value={login}@mail.ru", "ENDITEM",
		"Name=htmlencoded", "Value=false", "ENDITEM",
		"Name=referrer", "Value=https://mail.ru/", "ENDITEM",
		"LAST");

	web_submit_data("auth",
		"Action=https://auth.mail.ru/cgi-bin/auth?from=navi",
		"Method=POST",
		"EncodeAtSign=YES",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=https://account.mail.ru/",
		"Snapshot=t150.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=username", "Value={login}@mail.ru", "ENDITEM",
		"Name=Login", "Value={login}@mail.ru", "ENDITEM",
		"Name=password", "Value={pwd}", "ENDITEM",
		"Name=Password", "Value={pwd}", "ENDITEM",
		"Name=saveauth", "Value=1", "ENDITEM",
		"Name=new_auth_form", "Value=1", "ENDITEM",
		"Name=FromAccount", "Value=opener=account&allow_external=1&twoSteps=1", "ENDITEM",
		"Name=act_token", "Value={act_token}", "ENDITEM",
		"Name=page", "Value=https://e.mail.ru/messages/inbox?app_id_mytracker=58519&authid=lmgn291q.7vi&back=1&dwhsplit=s10273.b1ss12743s&from=login&x-login-auth=1", "ENDITEM",
		"Name=back", "Value=1", "ENDITEM",
		"Name=lang", "Value=ru_RU", "ENDITEM",
		"LAST");

	web_url("inbox",
		"URL=https://e.mail.ru/messages/inbox?app_id_mytracker=58519&authid=lmgn291q.7vi&back=1&dwhsplit=s10273.b1ss12743s&from=login&x-login-auth=1&back=1&from=navi&afterReload=1",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://e.mail.ru/messages/inbox?app_id_mytracker=58519&authid=lmgn291q.7vi&back=1&dwhsplit=s10273.b1ss12743s&from=login&x-login-auth=1&back=1&from=navi",
		"Snapshot=t152.inf",
		"Mode=HTML",
		"LAST");

	web_url("smart",
		"URL=https://e.mail.ru/api/v1/threads/status/smart?folder=0&limit=50&filters=%7B%7D&sort=%7B%22type%22:%22date%22,%22order%22:%22desc%22%7D&last_modified=1&force_custom_thread=true&supported_custom_metathreads=[%22tomyself%22]&pinned_limit=50&remove_emoji_opts=%7B%22remove_from_sender_name%22:false,%22remove_from_snippet%22:false,%22remove_from_subject%22:false%7D&offset=0&email={login}%40mail.ru&htmlencoded=false&token=faa88786bd9cbe66dcada5bf987cb590:jHJurG2e2MjUtl3mXhK8bOvCP6NhvEDgLizSulHxarJ7InRpbWUiOjE2OTQ1NDI4NzAsInR5cGUiOiJjc3JmIiwibm9uY2UiOiIyNzAzNDFmOTVkZTFmZmQ3In0&_=1694542870475",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://e.mail.ru/messages/inbox?app_id_mytracker=58519&authid=lmgn291q.7vi&back=1&dwhsplit=s10273.b1ss12743s&from=login&x-login-auth=1&back=1&from=navi&afterReload=1",
		"Snapshot=t157.inf",
		"Mode=HTML",
		"LAST");

	web_url("aliases",
		"URL=https://e.mail.ru/api/v1/aliases?email={login}%40mail.ru&htmlencoded=false&token=faa88786bd9cbe66dcada5bf987cb590:jHJurG2e2MjUtl3mXhK8bOvCP6NhvEDgLizSulHxarJ7InRpbWUiOjE2OTQ1NDI4NzAsInR5cGUiOiJjc3JmIiwibm9uY2UiOiIyNzAzNDFmOTVkZTFmZmQ3In0&_=1694542870473",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://e.mail.ru/messages/inbox?app_id_mytracker=58519&authid=lmgn291q.7vi&back=1&dwhsplit=s10273.b1ss12743s&from=login&x-login-auth=1&back=1&from=navi&afterReload=1",
		"Snapshot=t158.inf",
		"Mode=HTML",
		"LAST");

	web_url("unread",
		"URL=https://e.mail.ru/api/v1/golang/messages/services/cleanmaster/unread?email={login}%40mail.ru&htmlencoded=false&token=faa88786bd9cbe66dcada5bf987cb590:jHJurG2e2MjUtl3mXhK8bOvCP6NhvEDgLizSulHxarJ7InRpbWUiOjE2OTQ1NDI4NzAsInR5cGUiOiJjc3JmIiwibm9uY2UiOiIyNzAzNDFmOTVkZTFmZmQ3In0&_=1694542872822",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://e.mail.ru/messages/inbox?app_id_mytracker=58519&authid=lmgn291q.7vi&back=1&dwhsplit=s10273.b1ss12743s&from=login&x-login-auth=1&back=1&from=navi&afterReload=1",
		"Snapshot=t159.inf",
		"Mode=HTML",
		"LAST");

	web_url("smart_2",
		"URL=https://e.mail.ru/api/v1/threads/status/smart?folder=0&limit=50&filters=%7B%7D&sort=%7B%22type%22:%22date%22,%22order%22:%22desc%22%7D&last_modified=1694542045&force_custom_thread=true&supported_custom_metathreads=[%22tomyself%22]&remove_emoji_opts=%7B%22remove_from_sender_name%22:false,%22remove_from_snippet%22:false,%22remove_from_subject%22:false%7D&offset=0&email={login}%40mail.ru&htmlencoded=false&token=faa88786bd9cbe66dcada5bf987cb590:jHJurG2e2MjUtl3mXhK8bOvCP6NhvEDgLizSulHxarJ7InRpbWUiOjE2OTQ1NDI4NzAsInR5cGUiOiJjc3JmIiwibm9uY2UiOiIyNzAzNDFmOTVkZTFmZmQ3In0&_=1694542872947",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://e.mail.ru/inbox/?app_id_mytracker=58519&authid=lmgn291q.7vi&back=1%2C1&dwhsplit=s10273.b1ss12743s&from=login%2Cnavi&x-login-auth=1&afterReload=1",
		"Snapshot=t160.inf",
		"Mode=HTML",
		"LAST");

	web_url("requests",
		"URL=https://e.mail.ru/api/v1/messages/search/requests?query=&limit=5&email={login}%40mail.ru&htmlencoded=false&token=faa88786bd9cbe66dcada5bf987cb590:jHJurG2e2MjUtl3mXhK8bOvCP6NhvEDgLizSulHxarJ7InRpbWUiOjE2OTQ1NDI4NzAsInR5cGUiOiJjc3JmIiwibm9uY2UiOiIyNzAzNDFmOTVkZTFmZmQ3In0&_=1694542873454",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://e.mail.ru/inbox/?app_id_mytracker=58519&authid=lmgn291q.7vi&back=1%2C1&dwhsplit=s10273.b1ss12743s&from=login%2Cnavi&x-login-auth=1&afterReload=1",
		"Snapshot=t163.inf",
		"Mode=HTML",
		"LAST");

	web_reg_find("Search=All",
		"Text=200",
		"LAST");

	web_submit_data("update_5",
		"Action=https://e.mail.ru/api/v1/helpers/update",
		"Method=POST",
		"EncodeAtSign=YES",
		"TargetFrame=",
		"RecContentType=application/json",
		"Referer=https://e.mail.ru/inbox/?app_id_mytracker=58519&authid=lmgn291q.7vi&back=1%2C1&dwhsplit=s10273.b1ss12743s&from=login%2Cnavi&x-login-auth=1&afterReload=1",
		"Snapshot=t166.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=index", "Value=365", "ENDITEM",
		"Name=update", "Value={\"count\":{\"show\":true},\"time\":true}", "ENDITEM",
		"Name=email", "Value={login}@mail.ru", "ENDITEM",
		"Name=htmlencoded", "Value=false", "ENDITEM",
		"Name=token", "Value=faa88786bd9cbe66dcada5bf987cb590:jHJurG2e2MjUtl3mXhK8bOvCP6NhvEDgLizSulHxarJ7InRpbWUiOjE2OTQ1NDI4NzAsInR5cGUiOiJjc3JmIiwibm9uY2UiOiIyNzAzNDFmOTVkZTFmZmQ3In0", "ENDITEM",
		"LAST");

		web_url("login_2",
		"URL=https://o2.mail.ru/login?client_id=b4c073bb6c5a4b1b84d2c7d2a1bceb9b&redirect_uri=https://e.mail.ru&lang=ru&scope=calendar.calendars.read%20calendar.events.read&response_type=token&mode=hidden&state=cid%3D1%26e%3D__mailru_oauth_1694542874416_0.5112705781299065__",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://e.mail.ru/",
		"Snapshot=t167.inf",
		"Mode=HTML",
		"LAST");

	lr_end_transaction("02_login",2);



for (i = 0; i<send_iter_num; i++){
		
    char* mail_address = lr_eval_string("{mail_address}");
		

	lr_start_transaction("03_click_send_mail");

 





	web_reg_save_param_json(
		"ParamName=token_1",
		"QueryString=$.body.token",
		"LAST");

	web_reg_find("Search=All",
		"Text=200",
		"LAST");

	web_submit_data("short",
		"Action=https://e.mail.ru/api/v1/user/short",
		"Method=POST",
		"EncodeAtSign=YES",
		"TargetFrame=",
		"RecContentType=application/json",
		"Referer=https://e.mail.ru/inbox/?app_id_mytracker=58519&authid=lmgn291q.7vi&back=1%2C1&dwhsplit=s10273.b1ss12743s&from=login%2Cnavi&x-login-auth=1&afterReload=1",
		"Snapshot=t174.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=email", "Value={login}@mail.ru", "ENDITEM",
		"Name=htmlencoded", "Value=false", "ENDITEM",
		"Name=token", "Value=faa88786bd9cbe66dcada5bf987cb590:jHJurG2e2MjUtl3mXhK8bOvCP6NhvEDgLizSulHxarJ7InRpbWUiOjE2OTQ1NDI4NzAsInR5cGUiOiJjc3JmIiwibm9uY2UiOiIyNzAzNDFmOTVkZTFmZmQ3In0", "ENDITEM",
		"LAST");

	web_submit_data("update_6",
		"Action=https://e.mail.ru/api/v1/helpers/update",
		"Method=POST",
		"EncodeAtSign=YES",
		"TargetFrame=",
		"RecContentType=application/json",
		"Referer=https://e.mail.ru/inbox/?app_id_mytracker=58519&authid=lmgn291q.7vi&back=1%2C1&dwhsplit=s10273.b1ss12743s&from=login%2Cnavi&x-login-auth=1&afterReload=1",
		"Snapshot=t175.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=index", "Value=365", "ENDITEM",
		"Name=update", "Value={\"count\":{\"show\":true},\"time\":true}", "ENDITEM",
		"Name=email", "Value={login}@mail.ru", "ENDITEM",
		"Name=htmlencoded", "Value=false", "ENDITEM",
		"Name=token", "Value={token_1}", "ENDITEM",
		"LAST");

	web_url("security",
		"URL=https://e.mail.ru/api/v1/golang/user/security?email={login}%40mail.ru&htmlencoded=false&token={token_1}&_=1694542910517",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://e.mail.ru/inbox/?app_id_mytracker=58519&authid=lmgn291q.7vi&back=1%2C1&dwhsplit=s10273.b1ss12743s&from=login%2Cnavi&x-login-auth=1&afterReload=1",
		"Snapshot=t178.inf",
		"Mode=HTML",
		"LAST");

	web_url("short_2",
		"URL=https://e.mail.ru/api/v1/user/short?email={login}%40mail.ru&htmlencoded=false&token={token_1}&_=1694542910517",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://e.mail.ru/inbox/?app_id_mytracker=58519&authid=lmgn291q.7vi&back=1%2C1&dwhsplit=s10273.b1ss12743s&from=login%2Cnavi&x-login-auth=1&afterReload=1",
		"Snapshot=t179.inf",
		"Mode=HTML",
		"LAST");

	web_url("list",
		"URL=https://e.mail.ru/api/v1/user/social/bind/list?email={login}%40mail.ru&htmlencoded=false&token={token_1}&_=1694542910636",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://e.mail.ru/inbox/?app_id_mytracker=58519&authid=lmgn291q.7vi&back=1%2C1&dwhsplit=s10273.b1ss12743s&from=login%2Cnavi&x-login-auth=1&afterReload=1",
		"Snapshot=t180.inf",
		"Mode=HTML",
		"LAST");

	web_url("unread_2",
		"URL=https://e.mail.ru/api/v1/golang/messages/services/cleanmaster/unread?email={login}%40mail.ru&htmlencoded=false&token={token_1}&_=1694542910750",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://e.mail.ru/inbox/?app_id_mytracker=58519&authid=lmgn291q.7vi&back=1%2C1&dwhsplit=s10273.b1ss12743s&from=login%2Cnavi&x-login-auth=1&afterReload=1",
		"Snapshot=t181.inf",
		"Mode=HTML",
		"LAST");

	lr_end_transaction("03_click_send_mail",2);

	lr_start_transaction("04_send_mail");

 





	web_reg_save_param_json(
		"ParamName=cancellation_token",
		"QueryString=$.body.cancellation_token",
		"LAST");

 
	web_reg_save_param_json(
		"ParamName=id",
		"QueryString=$.body.id",
		"LAST");

	web_reg_find("Search=All",
		"Text=200",
		"LAST");

	web_reg_find("Search=Body",
		"Text=cancellation_button_lifetime\":\"20\"",
		"LAST");

	web_submit_data("send",
		"Action=https://e.mail.ru/api/v1/k8s/messages/send",
		"Method=POST",
		"EncodeAtSign=YES",
		"TargetFrame=",
		"RecContentType=application/json",
		"Referer=https://e.mail.ru/inbox/?app_id_mytracker=58519&authid=lmgn291q.7vi&back=1%2C1&dwhsplit=s10273.b1ss12743s&from=login%2Cnavi&x-login-auth=1&afterReload=1",
		"Snapshot=t183.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=ATTACHMENTS_RESTORE", "Value=true", "ENDITEM",
		"Name=ATTACHMENTS_EXPIRATION_TIME", "Value=14400000", "ENDITEM",
		"Name=id", "Value=d98Aa2B79CfB89Bf59fF5Fa77793C463", "ENDITEM",
		"Name=source", "Value={\"draft\":\"\",\"reply\":\"\",\"forward\":\"\",\"schedule\":\"\"}", "ENDITEM",
		"Name=headers", "Value={}", "ENDITEM",
		"Name=template", "Value=0", "ENDITEM",
		"Name=sign", "Value=0", "ENDITEM",
		"Name=remind", "Value=0", "ENDITEM",
		"Name=receipt", "Value=false", "ENDITEM",
		"Name=subject", "Value=TESTTESTTEST", "ENDITEM",
		"Name=priority", "Value=3", "ENDITEM",
		"Name=send_date", "Value=", "ENDITEM",
		"Name=body", "Value={\"html\":\"<div>TEST mail {time}</div><div>&nbsp;</div><div data-signature-widget=\\\"container\\\"><div data-signature-widget=\\\"content\\\"><div>--<br>Петр Николаев<br>Отправлено из Почты <a href=\\\"https://trk.mail.ru/c/zzm979\\\">Mail.ru</a></div></div></div>\",\"text\":\"TEST mail\\n"
		"\\n"
		"\\n"
		"\\n"
		"Подпись\\n"
		"--\\n"
		"Петр Николаев\\n"
		"Отправлено из Почты Mail.ru\"}", "ENDITEM",
		"Name=from", "Value=Петр Николаев <{login}@mail.ru>", "ENDITEM",
		"Name=correspondents", "Value={\"to\":\"<{mail_address}>\",\"cc\":\"\",\"bcc\":\"\"}", "ENDITEM",
		"Name=folder_id", "Value=", "ENDITEM",
		"Name=triggerModelChangePlease", "Value=true", "ENDITEM",
		"Name=compose_stat", "Value={\"user_track\":\"m|201|226|2|1;m|250|25|1|0;m|2040|147|1|1;m|16080|604|3|1;m|201|119|1|0;m|205|2|1|0;m|204|164|1|1;m|201|31|1|0;c|180|0|432|71;m|21|5|1|0;m|614|35|1|1;m|202|18|1|0;m|201|6|1|0;m|202|28|1|1;m|208|44|1|1;c|156|0|494|175;m|248|3|1|1;m|200|60|1|1;m|206|8|1|0;c|182|0|452|120;k|796|6;m|6348|1|1|1;m|205|3|1|1;m|408|3|1|1;m|202|14|1|1;m|201|52|1|1;m|201|104|1|1;m|203|16|1|0;m|204|5|1|0;m|202|2|1|0;m|203|34|1|1;m|204|3|1|0;m|203|5|1|1;m|203|3|1|0;c|168|0|479|123;m|32|2|1|0;k|45|4;m|162|72|1|1;m|203|82|1|1;c|181|0|374|237;m|21|3|1|0;k|153|4;m|47|5|1|1;m|206|5|1|0;c|86|0|378|244;k|69|4;m|255|6|1|1;k|713|9;k|1344|6;m|1599|80|1|1;m|1012|28|1|1;m|200|429|3|1;m|18268|132|1|1;m|201|510|3|1;m|206|141|1|0;m|204|59|1|0;c|195|0|349|726;m|14|3|1|0\",\"build\":\"release-fmail-21883.1970-01-03T05_30_35\",\"serverTime\":1693930713831}", "ENDITEM",
		"Name=delay_for_cancellation", "Value=true", "ENDITEM",
		"Name=attaches", "Value={\"list\":[]}", "ENDITEM",
		"Name=email", "Value={login}@mail.ru", "ENDITEM",
		"Name=htmlencoded", "Value=false", "ENDITEM",
		"Name=token", "Value={token_1}", "ENDITEM",
		"LAST");

	web_url("thread",
		"URL=https://e.mail.ru/api/v1/threads/thread?quotes_version=1&id={id}&email={login}%40mail.ru&htmlencoded=false&token={token_1}&_=1694542967830",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://e.mail.ru/inbox/?app_id_mytracker=58519&authid=lmgn291q.7vi&back=1%2C1&dwhsplit=s10273.b1ss12743s&from=login%2Cnavi&x-login-auth=1&afterReload=1",
		"Snapshot=t184.inf",
		"Mode=HTML",
		"LAST");

	web_submit_data("update_7",
		"Action=https://e.mail.ru/api/v1/helpers/update",
		"Method=POST",
		"EncodeAtSign=YES",
		"TargetFrame=",
		"RecContentType=application/json",
		"Referer=https://e.mail.ru/inbox/?app_id_mytracker=58519&authid=lmgn291q.7vi&back=1%2C1&dwhsplit=s10273.b1ss12743s&from=login%2Cnavi&x-login-auth=1&afterReload=1",
		"Snapshot=t185.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=index", "Value=365", "ENDITEM",
		"Name=update", "Value={\"count\":{\"show\":true},\"time\":true}", "ENDITEM",
		"Name=email", "Value={login}@mail.ru", "ENDITEM",
		"Name=htmlencoded", "Value=false", "ENDITEM",
		"Name=token", "Value={token_1}", "ENDITEM",
		"LAST");

	lr_end_transaction("04_send_mail",2);
	
}

	lr_start_transaction("05_logout");

	web_reg_find("Search=All",
		"Text=200",
		"LAST");

	web_submit_data("update_10",
		"Action=https://e.mail.ru/api/v1/helpers/update",
		"Method=POST",
		"EncodeAtSign=YES",
		"TargetFrame=",
		"RecContentType=application/json",
		"Referer=https://e.mail.ru/inbox/?app_id_mytracker=58519&authid=lmgn291q.7vi&back=1%2C1&dwhsplit=s10273.b1ss12743s&from=login%2Cnavi&x-login-auth=1&afterReload=1",
		"Snapshot=t197.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=index", "Value=365", "ENDITEM",
		"Name=update", "Value={\"count\":{\"show\":true},\"time\":true}", "ENDITEM",
		"Name=email", "Value={login}@mail.ru", "ENDITEM",
		"Name=htmlencoded", "Value=false", "ENDITEM",
		"Name=token", "Value={token_1}", "ENDITEM",
		"LAST");

	web_url("logout",
		"URL=https://auth.mail.ru/cgi-bin/logout?next=1&lang=ru_RU&page=https%3A%2F%2Fmail.ru%2F%3Ffrom%3Dlogout",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://e.mail.ru/",
		"Snapshot=t199.inf",
		"Mode=HTML",
		"LAST");

	lr_end_transaction("05_logout",2);

	return 0;
}
# 5 "d:\\dev\\qa_school\\test_script_vers_01\\\\combined_test_chrome_copy.c" 2

# 1 "vuser_end.c" 1
vuser_end()
{

	return 0;
}
# 6 "d:\\dev\\qa_school\\test_script_vers_01\\\\combined_test_chrome_copy.c" 2


#define DEFAULT_SZ 99

#ifndef ADDCONT_H
#define ADDCONT_H

char addcont (char name[], char surname[], char email[], char phonenum[], char address[], char other_info[]);

#endif /* ADDCONT_H */


#ifndef RM_NEWLINE_H
#define RM_NEWLINE_H

char rm_newline (char nlstring[]);

#endif /* RM_NEWLINE_H */


#ifndef FIX_OVERFLOW_H
#define FIX_OVERFLOW_H

void fix_overflow(char arr[], int len);

#endif /* FIX_OVERFLOW_H */

#ifndef LIST_ALL_H
#define LIST_ALL_H

void list_all();

#endif /* LIST_ALL_H */

#ifndef FLAGCHK_H
#define FLAGCHK_H
int flagchk (int l_flag, int n_flag, int d_flag, int h_flag, int L_flag);

#endif /* FLAGCHK_H */

#ifndef LIST_SPEC_CONT_H
#define LIST_SPEC_CONT_H
void list_spec_cont ();

#endif /* LIST_SPEC_CONT_H */
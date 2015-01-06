#include <stdio.h>
#if HAVE_SYS_TYPES_H
# include <sys/types.h>
#endif
#if HAVE_SYS_STAT_H
# include <sys/stat.h>
#endif
#if STDC_HEADERS
# include <stdlib.h>
# include <stddef.h>
#else
# if HAVE_STDLIB_H
#  include <stdlib.h>
# endif
#endif
#if HAVE_STRING_H
# if !STDC_HEADERS && HAVE_MEMORY_H
#  include <memory.h>
# endif
# include <string.h>
#endif
#if HAVE_STRINGS_H
# include <strings.h>
#endif
#if HAVE_INTTYPES_H
# include <inttypes.h>
#else
# if HAVE_STDINT_H
#  include <stdint.h>
# endif
#endif
#if HAVE_UNISTD_H
# include <unistd.h>
#endif
long longval () { return (long) (sizeof (size_t)); }
unsigned long ulongval () { return (long) (sizeof (size_t)); }
#include <stdio.h>
#include <stdlib.h>
int
main ()
{

  FILE *f = fopen ("conftest.val", "w");
  if (! f)
    exit (1);
  if (((long) (sizeof (size_t))) < 0)
    {
      long i = longval ();
      if (i != ((long) (sizeof (size_t))))
	exit (1);
      fprintf (f, "%ld\n", i);
    }
  else
    {
      unsigned long i = ulongval ();
      if (i != ((long) (sizeof (size_t))))
	exit (1);
      fprintf (f, "%lu\n", i);
    }
  exit (ferror (f) |fclose (f) != 0);

  ;
  return 0;
}

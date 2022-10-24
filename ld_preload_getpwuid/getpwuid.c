#define _GNU_SOURCE
#include <pwd.h>
#include <dlfcn.h>
#include <string.h>

#define SUFFIX " of house targaryen"

struct passwd *getpwuid(uid_t uid)
{
    static void * (*func)();
    struct passwd *p;

    if (!func)
    {
        func = (void *(*)()) dlsym(RTLD_NEXT, "getpwuid");
    }

    p=func(uid);
    p->pw_name=strcat(p->pw_name,SUFFIX);

    return(p);
}

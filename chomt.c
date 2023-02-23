#include <stdio.h>
#include <stdbool.h>


typedef struct {
    const char *regexp;
} FSM;


FSM compile_fsm(const char *regexp)
{
    FSM fsm = {.regexp = regexp};
    return fsm;
}


bool match(FSM *fsm, const char *text)
{
    return fsm->regexp == text;
}


int main()
{
    const char *regexp = "abc";
    const char *text = "abc";

    FSM fsm = compile_fsm(regexp);
    bool is_matched = match(&fsm, text);

    printf("text \"%s\" => regexp \"%s\": %s\n", text, regexp, is_matched ? "true":"false");
    return 0;
}

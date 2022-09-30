#include <stdio.h>
#include <string.h>
void parser(char *html)
{
    int in = 0;
    int index = 0;
    for (int i = 0; i < strlen(html); i++)
    {
        if (html[i] == '<')
        {
            in = 1;
            continue;
        }
        else if (html[i] == '>')
        {
            in = 0;
            continue;
        }
        if (in == 0)
        {
            html[index] = html[i];
            index++;
        }
    }
    html[index] = '\0';
    // removeing front space
    while (html[0] == ' ')
    {
        for (int i = 0; i < strlen(html); i++)
        {
            html[i] = html[i + 1];
        }
    }
    // rremoving last space
    while (html[strlen(html) - 1] == ' ')
    {
        html[strlen(html) - 1] = '\0';
    }
    
}
int main()
{
    char html[] = "<h1>        this is handing       </h1>";
    parser(html);
    printf("--%s--\n", html);
    return 0;
}
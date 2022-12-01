#include &lt;stdio.h&gt;

int main()
{
    int menu[16];

    int i;
    for(i = 0; i &lt; 16; i++)
    {
        printf(&quot;Input array value&quot;);
        scanf(&quot;\n%d&quot;, &amp;menu[i]);
    }

    
    for(i = 0; i &lt; 16; i++)
    {
        printf(&quot;%d\n&quot;, menu[i]);
    }


}
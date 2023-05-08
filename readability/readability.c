#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

int main(void)
{
    string Text= get_string("Text: ");
     float t=0;
     for (int i=0, n=strlen(Text);i<n;i++)
     {
         if (isalpha(Text[i]))
         {
             t++;
          }
          }
         {
{
           float z=1;
             for (int i=0, n=strlen(Text);i<n;i++)
             {
                 if (Text[i]==' ')
                 {
                     z++;
                     }
                     }
{
           float j=0;
             for (int i=0, n=strlen(Text);i<n;i++)
             {
                 if (Text[i]=='.' || Text[i]== '?' || Text[i]=='!' )
                 {
                     j++;
                     }
                     }
                         {
                             {
                                 {
                                    float L=(t/z)*100;
                                    float S=(j/z)*100;
                                      float index=(0.0588*L)-(0.296*S)-15.8;
                                      if (index > 16)
                                      {
                                          printf ("Grade 16+\n");
                                          }
                                          else if( index <= 16 && index >= 1)
                                          {
                                              printf("Grade %i\n",(int) round(index));
                                              }
                                              else if (index<1)
                                              {
                                                  printf("Before Grade 1\n");
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }



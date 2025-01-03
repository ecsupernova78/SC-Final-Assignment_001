#include <ctime>
using namespace std;

int make_new_seed ()
{
  time_t tp;
  struct tm *temp;
  unsigned int temp2, temp3;
  static unsigned int temp4 = 0xe0e1;
  time (&tp);
  temp = localtime (&tp);
  temp2 = (temp->tm_sec << 26) + (temp->tm_min << 20) + (temp->tm_hour << 15)
           + (temp->tm_mday << 10) + (temp->tm_mon << 6);
  temp3 = (temp->tm_year << 13) + (temp->tm_wday << 10) + (temp->tm_yday << 1)
           + temp->tm_isdst;
  temp2 ^= clock () ^ temp3;
  temp4 = (temp4 * 0xeeee) % 0xffff;
  temp2 ^= temp4 << 16;
  temp4 = (temp4 * 0xaeee) % 0xffff;
  temp2 ^= temp4;
  temp2 &= 0x7fffffff;
  return temp2;
}

#if 0
main()
{
  printf("%u\n", make_new_seed());
}
#endif

/***********************************************************************************
 * SPRNG (c) 2014 by Florida State University                                       *
 *                                                                                  *
 * SPRNG is licensed under a                                                        *
 * Creative Commons Attribution-NonCommercial-ShareAlike 4.0 International License. *
 *                                                                                  *
 * You should have received a copy of the license along with this                   *
 * work. If not, see <http://creativecommons.org/licenses/by-nc-sa/4.0/>.           *
 ************************************************************************************/

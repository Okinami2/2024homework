

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strlen(const char str[])
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    int n = 0, i = 0;
    while (str[i++] !='\0')
    {
        n++;
    }
    return n; //return值可根据需要修改
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strcat(char s1[], const char s2[])
{
    int n = tj_strlen(s2);
    int i = 0;
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    while (s1[i] != '\0')
        i++;
    for (int j = 0; j < n; j++)
    {
        s1[i++] = s2[j];
    }
    s1[i] = '\0';
    return 0; //return值可根据需要修改
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strncat(char s1[], const char s2[], const int len)
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    int i = 0;
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    while (s1[i] != '\0')
        i++;
    for (int j = 0; j < len; j++)
    {
        s1[i++] = s2[j];
    }
    s1[i] = '\0';
    return 0; //return值可根据需要修改
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strcpy(char s1[], const char s2[])
{
    int j = 0;
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    for (j; j < tj_strlen(s2); j++)
    {
        s1[j] = s2[j];
    }
    s1[j] = '\0';
    return 0; //return值可根据需要修改
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strncpy(char s1[], const char s2[], const int len)
{
    int m = tj_strlen(s1);
    int j = 0;
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    for ( j ; j < len; j++)
    {
        if (s2[j] == '\0')
            break;
        s1[j] = s2[j];
    }
    if (j > m)
        s1[j] = '\0';
    return 0; //return值可根据需要修改
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strcmp(const char s1[], const char s2[])
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    int n = tj_strlen(s1) > tj_strlen(s2) ? tj_strlen(s1) :tj_strlen(s2);
    int re = 0;
    for (int i = 0; i < n; i++)
    {
        re = s1[i] - s2[i];
        if (re)
            break;
    }
    return re; //return值可根据需要修改
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strcasecmp(const char s1[], const char s2[])
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    int n = tj_strlen(s1) > tj_strlen(s2) ? tj_strlen(s1) : tj_strlen(s2);
    int re = 0;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        if (s1[i] >= 65 && s1[i] <= 90)
            a = s1[i] + 32;
        else
            a = s1[i];
        if (s2[i] >= 65 && s2[i] <= 90)
            b = s2[i] + 32;
        else
            b = s2[i];
        re = a - b;
        if (re != 0) {
            if(re != 32 && re != -32)
                return re;
        }
    }
    return 0; //return值可根据需要修改
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strncmp(const char s1[], const char s2[], const int len)
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    int re = 0;
    for (int i = 0; i < len; i++)
    {
        re = s1[i] - s2[i];
        if (re)
            break;
        if (s1[i] == '\0' || s2[i] == '\0')
            break;
    }
    return re; //return值可根据需要修改
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strcasencmp(const char s1[], const char s2[], const int len)
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    int re = 0;
    for (int i = 0; i < len; i++)
    {
        int a, b;
        if (s1[i] >= 65 && s1[i] <= 90)
            a = s1[i] + 32;
        else
            a = s1[i];
        if (s2[i] >= 65 && s2[i] <= 90)
            b = s2[i] + 32;
        else
            b = s2[i];
        re = a - b;
        if (re != 0) {
            if (re != 32 && re != -32)
                return re;
        }
        if (s1[i] == '\0' || s2[i] == '\0')
            break;
    }
    return re; //return值可根据需要修改
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strupr(char str[])
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    int n = tj_strlen(str);
    for (int i = 0; i < n; i++)
    {
        if (str[i] >= 97 && str[i] <= 122)
            str[i] -= 32;
    }
    return 0; //return值可根据需要修改
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strlwr(char str[])
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    int n = tj_strlen(str);
    for (int i = 0; i < n; i++)
    {
        if (str[i] >= 65 && str[i] <= 90)
            str[i] += 32;
    }
    return 0; //return值可根据需要修改
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strchr(const char str[], char ch)
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    int n = tj_strlen(str);
    int re = 0;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == ch) {
            re = i + 1;
            break;
        }
    }
    return re; //return值可根据需要修改
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strstr(const char str[], const char substr[])
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    int n = tj_strlen(str);
    int re = 0;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == substr[0]) {
            int j = 1;
            for ( j ; j < tj_strlen(substr); j++) {
                if (str[i + j] != substr[j]) {
                    break;
                }
            }
            if (j == tj_strlen(substr)) {
                re = i + 1;
                break;
            }
        }
    }
    return re;//return值可根据需要修改
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strrchr(const char str[], const char ch)
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    int n = tj_strlen(str);
    int re = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (str[i] == ch) {
            re = i + 1;
            break;
        }
    }
    return re; //return值可根据需要修改
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strrstr(const char str[], const char substr[])
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    int n = tj_strlen(str);
    int re = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (str[i] == substr[0]) {
            int j = 1;
            for (j; j < tj_strlen(substr); j++) {
                if (str[i + j] != substr[j]) {
                    break;
                }
            }
            if (j == tj_strlen(substr)) {
                re = i + 1;
                break;
            }
        }
    }
    return re;//return值可根据需要修改
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strrev(char str[])
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    int n = tj_strlen(str);
    for (int i = 0; i < (n / 2); i++)
    {
        char tmp = str[i];
        str[i] = str[n - 1 - i];
        str[n - 1 - i] = tmp;
    }
    return 0; //return值可根据需要修改
}

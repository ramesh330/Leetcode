int days[] = {
    31, 28, 31, 30, 31, 30,
    31, 31, 30, 31, 30, 31
};

int getDay(char *date)
{
    int month = (date[0] - '0') * 10 + (date[1] - '0');
    int day = (date[3] - '0') * 10 + (date[4] - '0');

    int total = day;

    for (int i = 0; i < month - 1; i++)
        total += days[i];

    return total;
}

int countDaysTogether(char* arriveAlice, char* leaveAlice,char* arriveBob, char* leaveBob)
{
    int a1 = getDay(arriveAlice);
    int a2 = getDay(leaveAlice);

    int b1 = getDay(arriveBob);
    int b2 = getDay(leaveBob);

    int start = (a1 > b1) ? a1 : b1;
    int end = (a2 < b2) ? a2 : b2;

    if (start > end)
        return 0;

    return end - start + 1;
}
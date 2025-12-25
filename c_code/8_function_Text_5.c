/*2025.12.25
编写一组函数，用于处理日期和时间相关的操作。使用这些函数，
可以进行日期和时间相关的计算。
*/

#include<stdio.h>

char* getWeekName(int week);
char* getMonthName(int month);
int isLeapYear(int year);
int getTotalDaysOfMonth(int year, int month);
int getTotalDaysOfYear(int year);

int main() {
	// 在主函数中使用这些函数的示例代码
	int result = getTotalDaysOfMonth(2025, 12);
	printf("Total days in February 2025: %d\n", result);
	char* monthName = getMonthName(12);
	printf("Month 12: %s\n", monthName);
	return 0;
}
// 函数：getWeekName
// 描述：根据输入的星期数，返回相应的星期名称
// 参数：week - 代表星期的整数（1表示星期一，7表示星期日）
// 返回值：返回表示星期名称的字符串，如果输入无效则返回空字符串 
char* getWeekName(int week) {
	switch (week) {
	case 1:return "Monday"; 
	case 2:return "Tuseday"; 
	case 3:return "Wednesday"; 
	case 4:return "Thursday"; 
	case 5:return "Friday"; 
	case 6:return "Saturday";
	case 7:return "Sunday";
	default:return "";
	}
}
// 函数：getMonthName
// 描述：根据输入的月份数，返回相应的月份名称
// 参数：month - 代表月份的整数（1表示一月，12表示十二月）
// 返回值：返回表示月份名称的字符串，如果输入无效则返回空字符
char* getMonthName(int month) {
	char* months[] = { "January", "February", "March","April", "May", "June", 
		              "July","August", "September", "October","November", "December" };
	if (month >= 1 && month <= 12) {
		return months[month - 1];
	}
	return "";
}
// 函数：isLeapYear
// 描述：检查输入的年份是否为闰年
// 参数：year - 待检查的年份
// 返回值：如果是闰年则返回1，否则返回0，如果输入为负数则返
//回 - 1作为错误标志
// 提示：能被4整除但不能被100整除，或者能被400整除的年份，即为闰年。
int isLeapYear(int year) {
	if (year < 0) {
		return -1;
	}
	if ((year / 4 == 0) && (year / 100 != 0) || (year / 400 == 0)) {
		return 1;
	}
	return 0;
}
// 函数：getTotalDaysOfMonth
// 描述：获取指定年份和月份的总天数
// 参数：year - 年份，month - 月份
// 返回值：返回该月份的总天数，如果输入无效则返回-1作为错误标志
int getTotalDaysOfMonth(int year, int month) {
	int days[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30,31, 30, 31 };
	if (isLeapYear(year)) {
		days[1]++; // 闰年2月有29天
	}
	if (month >= 1 && month <= 12) {
		return days[month - 1];
	}
	return -1; // 输入月份无效，返回错误标志
}
// 函数：getTotalDaysOfYear
// 描述：获取指定年份的总天数
// 参数：year - 年份
// 返回值：返回该年份的总天数，如果输入无效则返回-1作为错误标志
int getTotalDaysOfYear(int year) {
	int result = isLeapYear(year);
	switch (result) {
	case 1:
		return 366;
	case 0:
		return 365;
	}
	return -1;
}



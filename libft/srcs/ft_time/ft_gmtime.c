/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gmtime.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thplessi <thplessi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/23 14:24:44 by thplessi          #+#    #+#             */
/*   Updated: 2016/11/13 14:25:50 by thplessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
** man 3 gmtime
*/

static int		ft_isleap(int year)
{
	if (year <= FT_FRSTG_YEAR)
		return (!(year % 4));
	return (!(year % 400) || ((year % 100) && !(year % 4)));
}

static int		ft_get_year(time_t *rawtime)
{
	int			year;
	int			br;
	time_t		rawtime_cpy;

	rawtime_cpy = (*rawtime > 0) ? *rawtime : -(*rawtime);
	year = 0;
	br = 1;
	while (br)
	{
		year++;
		if (ft_isleap((*rawtime > 0) ? (1970 + year) : (1970 - year)))
			(rawtime_cpy >= 366) ? (rawtime_cpy -= 366) : (br = 0);
		else
			(rawtime_cpy >= 365) ? (rawtime_cpy -= 365) : (br = 0);
	}
	*rawtime = (*rawtime > 0) ? rawtime_cpy : -rawtime_cpy;
	return ((*rawtime > 0) ? (69 + year) : (70 - year));
}

static int		ft_get_month(int year, time_t *rawtime)
{
	int			month;
	int			br;
	time_t		rawtime_cpy;

	rawtime_cpy = (*rawtime > 0) ? *rawtime : -(*rawtime);
	month = 0;
	br = 1;
	while (br)
	{
		month++;
		if (month == 1)
		{
			if (ft_isleap(year + 1900))
				(rawtime_cpy >= 29) ? (rawtime_cpy -= 29) : (br = 0);
			else
				(rawtime_cpy >= 28) ? (rawtime_cpy -= 28) : (br = 0);
		}
		else if ((month <= 6 && !(month % 2)) ||
			(month > 6 && (month % 2)))
			(rawtime_cpy >= 31) ? (rawtime_cpy -= 31) : (br = 0);
		else
			(rawtime_cpy >= 30) ? (rawtime_cpy -= 30) : (br = 0);
	}
	*rawtime = (*rawtime > 0) ? rawtime_cpy : -rawtime_cpy;
	return ((*rawtime > 0) ? (month - 1) : (12 - month));
}

static void		ft_tm_neg(struct tm *ptm)
{
	ptm->tm_yday += (ft_isleap(ptm->tm_year + 1900)) ? 365 : 364;
	if (ptm->tm_mon == 1)
		ptm->tm_mday += (ft_isleap(ptm->tm_year + 1900)) ? 31 : 30;
	else
		ptm->tm_mday += ((ptm->tm_mon <= 6 && !(ptm->tm_mon % 2)) ||
		(ptm->tm_mon > 6 && (ptm->tm_mon % 2))) ? 33 : 32;
	ptm->tm_wday += 6;
	ptm->tm_hour += 23;
	ptm->tm_min += 59;
	ptm->tm_sec += 60;
}

struct tm		*ft_gmtime(time_t *rawtime)
{
	struct tm	*ptm;
	time_t		rawtime_cpy;

	ptm = (struct tm *)malloc(sizeof(struct tm));
	if (ptm == NULL)
		return (NULL);
	rawtime_cpy = *rawtime;
	ptm->tm_sec = (int)(rawtime_cpy % 60);
	rawtime_cpy /= 60;
	ptm->tm_min = (int)(rawtime_cpy % 60);
	rawtime_cpy /= 60;
	ptm->tm_hour = (int)(rawtime_cpy % 24);
	rawtime_cpy /= 24;
	ptm->tm_wday = (int)((rawtime_cpy + 4) % 7);
	ptm->tm_year = ft_get_year(&rawtime_cpy);
	ptm->tm_yday = (int)rawtime_cpy;
	ptm->tm_mon = ft_get_month(ptm->tm_year, &rawtime_cpy);
	ptm->tm_mday = (int)rawtime_cpy + 1;
	ptm->tm_isdst = 0;
	(rawtime_cpy < 0) ? ft_tm_neg(ptm) : 0;
	return (ptm);
}

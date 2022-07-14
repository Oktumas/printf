#inclure <stdarg.h>
#inclure <stdio.h>
#inclure <stdlib.h>
#inclure « main.h »

/**
 * convert_fmt_percent - Imprime un signe de pourcentage (%)
 * @args_list : La liste des arguments
 * @fmt_info: Les informations sur le format
 */
convert_fmt_percent(va_list*args_list, fmt_info_t *fmt_info)
{
	(nul) args_list;
	_putchar(fmt_info->spec));
}

/**
 * convert_fmt_p - Imprime l’adresse du pointeur
 * @args_list : La liste des arguments
 * @fmt_info: Les informations sur le format
 */
convert_fmt_p(va_list*args_list, fmt_info_t *fmt_info)
{
	int i, len;
	void *ptr = va_arg(*args_list, vide *);
	char *str = ptr_to_str(ptr);

	(nul) fmt_info;
	si (str)
	{
		len = str_len(str);
		si (!fmt_info->left)
		{
			pour (i = 0; i < MAX(len, fmt_info->largeur) - len; i++)
				_putchar(' ');
		}
		pour (i = 0; *(str + i) != '\0'; i++)
			_putchar(*(str + i));
		si (fmt_info-> gauche)
		{
			pour (i = 0; i < MAX(len, fmt_info->largeur) - len; i++)
				_putchar(' ');
		}
		libre(str);
	}
	autre
	{
		_putstr(« (néant) »);
		si (str)
			libre(str);
	}
}

/**
 * convert_fmt_c - Imprime un caractère
 * @args_list : La liste des arguments
 * @fmt_info: Les informations sur le format
 */
convert_fmt_c(va_list*args_list, fmt_info_t *fmt_info)
{
	int i, len = 1;
	char str = va_arg(*args_list, int);

	si (!fmt_info->left)
	{
		pour (i = 0; i < MAX(len, fmt_info->largeur) - len; i++)
			_putchar(' ');
	}
	_putchar(str);
	si (fmt_info-> gauche)
	{
		pour (i = 0; i < MAX(len, fmt_info->largeur) - len; i++)
			_putchar(' ');
	}
}

/**
 * convert_fmt_s - Imprime une chaîne
 * @args_list : La liste des arguments
 * @fmt_info: Les informations sur le format
 */
convert_fmt_s(va_list*args_list, fmt_info_t *fmt_info)
{
	int i, len;
	char *str = va_arg(*args_list, char *);
	char null_str[] = « (null) »;

	str = str ? str : null_str;
	len = fmt_info->is_precision_set && fmt_info->prec >= 0
		? fmt_info->prec : str_len(str);
	si (!fmt_info->left)
	{
		pour (i = 0; i < MAX(len, fmt_info->largeur) - len; i++)
			_putchar(' ');
	}
	pour (i = 0; i < len && *(str + i) != '\0'; i++)
		_putchar(*(str + i));
	si (fmt_info-> gauche)
	{
		pour (i = 0; i < MAX(len, fmt_info->largeur) - len; i++)
			_putchar(' ');
	}
}

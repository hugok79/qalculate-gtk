/*
    Qalculate (GTK UI)

    Copyright (C) 2024  Hanna Knutsson (hanna.knutsson@protonmail.com)

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.
*/

#ifndef NUMBER_BASES_DIALOG_H
#define NUMBER_BASES_DIALOG_H

#include <gtk/gtk.h>

void convert_number_bases(GtkWindow *parent, const gchar *initial_expression = "", int base = 10);

#endif /* NUMBER_BASES_DIALOG_H */

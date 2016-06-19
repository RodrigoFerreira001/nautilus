/*
 * Copyright (C) 2016 Neil Herald <neil.herald@gmail.com>
 *
 * Nautilus is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of the
 * License, or (at your option) any later version.
 *
 * Nautilus is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, see <http://www.gnu.org/licenses/>.
 */

#include <gtk/gtk.h>

#include "nautilus-toolbar-menu-sections.h"


NautilusToolbarMenuSections *
nautilus_toolbar_menu_sections_new (gboolean show_undo_redo_section)
{
        NautilusToolbarMenuSections *sections;

        sections = g_new0 (NautilusToolbarMenuSections, 1);
        sections->show_undo_redo_section = show_undo_redo_section;

        return sections;
}

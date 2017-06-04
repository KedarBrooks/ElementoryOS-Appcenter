/* AppListRow.c generated by valac 0.34.8, the Vala compiler
 * generated from AppListRow.vala, do not modify */

/* -*- Mode: vala; indent-tabs-mode: nil; tab-width: 4 -*-*/
/*-
 * Copyright (c) 2016 elementary LLC. (https://elementary.io)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * Authored by: Jeremy Wootten <jeremy@elementaryos.org>
 */

#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>
#include <stdlib.h>
#include <string.h>


#define APP_CENTER_WIDGETS_TYPE_APP_LIST_ROW (app_center_widgets_app_list_row_get_type ())
#define APP_CENTER_WIDGETS_APP_LIST_ROW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), APP_CENTER_WIDGETS_TYPE_APP_LIST_ROW, AppCenterWidgetsAppListRow))
#define APP_CENTER_WIDGETS_IS_APP_LIST_ROW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), APP_CENTER_WIDGETS_TYPE_APP_LIST_ROW))
#define APP_CENTER_WIDGETS_APP_LIST_ROW_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), APP_CENTER_WIDGETS_TYPE_APP_LIST_ROW, AppCenterWidgetsAppListRowIface))

typedef struct _AppCenterWidgetsAppListRow AppCenterWidgetsAppListRow;
typedef struct _AppCenterWidgetsAppListRowIface AppCenterWidgetsAppListRowIface;

#define APP_CENTER_CORE_TYPE_PACKAGE (app_center_core_package_get_type ())
#define APP_CENTER_CORE_PACKAGE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), APP_CENTER_CORE_TYPE_PACKAGE, AppCenterCorePackage))
#define APP_CENTER_CORE_PACKAGE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), APP_CENTER_CORE_TYPE_PACKAGE, AppCenterCorePackageClass))
#define APP_CENTER_CORE_IS_PACKAGE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), APP_CENTER_CORE_TYPE_PACKAGE))
#define APP_CENTER_CORE_IS_PACKAGE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), APP_CENTER_CORE_TYPE_PACKAGE))
#define APP_CENTER_CORE_PACKAGE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), APP_CENTER_CORE_TYPE_PACKAGE, AppCenterCorePackageClass))

typedef struct _AppCenterCorePackage AppCenterCorePackage;
typedef struct _AppCenterCorePackageClass AppCenterCorePackageClass;

struct _AppCenterWidgetsAppListRowIface {
	GTypeInterface parent_iface;
	gboolean (*get_update_available) (AppCenterWidgetsAppListRow* self);
	gboolean (*get_is_os_updates) (AppCenterWidgetsAppListRow* self);
	gboolean (*get_is_driver) (AppCenterWidgetsAppListRow* self);
	gboolean (*get_is_updating) (AppCenterWidgetsAppListRow* self);
	gchar* (*get_name_label) (AppCenterWidgetsAppListRow* self);
	gboolean (*has_package) (AppCenterWidgetsAppListRow* self);
	AppCenterCorePackage* (*get_package) (AppCenterWidgetsAppListRow* self);
};



GType app_center_core_package_get_type (void) G_GNUC_CONST;
GType app_center_widgets_app_list_row_get_type (void) G_GNUC_CONST;
gboolean app_center_widgets_app_list_row_get_update_available (AppCenterWidgetsAppListRow* self);
gboolean app_center_widgets_app_list_row_get_is_os_updates (AppCenterWidgetsAppListRow* self);
gboolean app_center_widgets_app_list_row_get_is_driver (AppCenterWidgetsAppListRow* self);
gboolean app_center_widgets_app_list_row_get_is_updating (AppCenterWidgetsAppListRow* self);
gchar* app_center_widgets_app_list_row_get_name_label (AppCenterWidgetsAppListRow* self);
gboolean app_center_widgets_app_list_row_has_package (AppCenterWidgetsAppListRow* self);
AppCenterCorePackage* app_center_widgets_app_list_row_get_package (AppCenterWidgetsAppListRow* self);


gboolean app_center_widgets_app_list_row_get_update_available (AppCenterWidgetsAppListRow* self) {
#line 25 "/home/kedarbrooks/Documents/Projects/AppStore/src/Widgets/AppListRow.vala"
	g_return_val_if_fail (self != NULL, FALSE);
#line 25 "/home/kedarbrooks/Documents/Projects/AppStore/src/Widgets/AppListRow.vala"
	return APP_CENTER_WIDGETS_APP_LIST_ROW_GET_INTERFACE (self)->get_update_available (self);
#line 79 "AppListRow.c"
}


gboolean app_center_widgets_app_list_row_get_is_os_updates (AppCenterWidgetsAppListRow* self) {
#line 26 "/home/kedarbrooks/Documents/Projects/AppStore/src/Widgets/AppListRow.vala"
	g_return_val_if_fail (self != NULL, FALSE);
#line 26 "/home/kedarbrooks/Documents/Projects/AppStore/src/Widgets/AppListRow.vala"
	return APP_CENTER_WIDGETS_APP_LIST_ROW_GET_INTERFACE (self)->get_is_os_updates (self);
#line 88 "AppListRow.c"
}


gboolean app_center_widgets_app_list_row_get_is_driver (AppCenterWidgetsAppListRow* self) {
#line 27 "/home/kedarbrooks/Documents/Projects/AppStore/src/Widgets/AppListRow.vala"
	g_return_val_if_fail (self != NULL, FALSE);
#line 27 "/home/kedarbrooks/Documents/Projects/AppStore/src/Widgets/AppListRow.vala"
	return APP_CENTER_WIDGETS_APP_LIST_ROW_GET_INTERFACE (self)->get_is_driver (self);
#line 97 "AppListRow.c"
}


gboolean app_center_widgets_app_list_row_get_is_updating (AppCenterWidgetsAppListRow* self) {
#line 28 "/home/kedarbrooks/Documents/Projects/AppStore/src/Widgets/AppListRow.vala"
	g_return_val_if_fail (self != NULL, FALSE);
#line 28 "/home/kedarbrooks/Documents/Projects/AppStore/src/Widgets/AppListRow.vala"
	return APP_CENTER_WIDGETS_APP_LIST_ROW_GET_INTERFACE (self)->get_is_updating (self);
#line 106 "AppListRow.c"
}


gchar* app_center_widgets_app_list_row_get_name_label (AppCenterWidgetsAppListRow* self) {
#line 29 "/home/kedarbrooks/Documents/Projects/AppStore/src/Widgets/AppListRow.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 29 "/home/kedarbrooks/Documents/Projects/AppStore/src/Widgets/AppListRow.vala"
	return APP_CENTER_WIDGETS_APP_LIST_ROW_GET_INTERFACE (self)->get_name_label (self);
#line 115 "AppListRow.c"
}


gboolean app_center_widgets_app_list_row_has_package (AppCenterWidgetsAppListRow* self) {
#line 30 "/home/kedarbrooks/Documents/Projects/AppStore/src/Widgets/AppListRow.vala"
	g_return_val_if_fail (self != NULL, FALSE);
#line 30 "/home/kedarbrooks/Documents/Projects/AppStore/src/Widgets/AppListRow.vala"
	return APP_CENTER_WIDGETS_APP_LIST_ROW_GET_INTERFACE (self)->has_package (self);
#line 124 "AppListRow.c"
}


AppCenterCorePackage* app_center_widgets_app_list_row_get_package (AppCenterWidgetsAppListRow* self) {
#line 31 "/home/kedarbrooks/Documents/Projects/AppStore/src/Widgets/AppListRow.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 31 "/home/kedarbrooks/Documents/Projects/AppStore/src/Widgets/AppListRow.vala"
	return APP_CENTER_WIDGETS_APP_LIST_ROW_GET_INTERFACE (self)->get_package (self);
#line 133 "AppListRow.c"
}


static void app_center_widgets_app_list_row_base_init (AppCenterWidgetsAppListRowIface * iface) {
#line 24 "/home/kedarbrooks/Documents/Projects/AppStore/src/Widgets/AppListRow.vala"
	static gboolean initialized = FALSE;
#line 24 "/home/kedarbrooks/Documents/Projects/AppStore/src/Widgets/AppListRow.vala"
	if (!initialized) {
#line 24 "/home/kedarbrooks/Documents/Projects/AppStore/src/Widgets/AppListRow.vala"
		initialized = TRUE;
#line 144 "AppListRow.c"
	}
}


/** Interface implemented by PackageRow and HeaderRow and used to
      * determine sort order **/
GType app_center_widgets_app_list_row_get_type (void) {
	static volatile gsize app_center_widgets_app_list_row_type_id__volatile = 0;
	if (g_once_init_enter (&app_center_widgets_app_list_row_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (AppCenterWidgetsAppListRowIface), (GBaseInitFunc) app_center_widgets_app_list_row_base_init, (GBaseFinalizeFunc) NULL, (GClassInitFunc) NULL, (GClassFinalizeFunc) NULL, NULL, 0, 0, (GInstanceInitFunc) NULL, NULL };
		GType app_center_widgets_app_list_row_type_id;
		app_center_widgets_app_list_row_type_id = g_type_register_static (G_TYPE_INTERFACE, "AppCenterWidgetsAppListRow", &g_define_type_info, 0);
		g_type_interface_add_prerequisite (app_center_widgets_app_list_row_type_id, gtk_list_box_row_get_type ());
		g_once_init_leave (&app_center_widgets_app_list_row_type_id__volatile, app_center_widgets_app_list_row_type_id);
	}
	return app_center_widgets_app_list_row_type_id__volatile;
}



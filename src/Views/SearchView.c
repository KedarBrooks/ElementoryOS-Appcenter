/* SearchView.c generated by valac 0.34.8, the Vala compiler
 * generated from SearchView.vala, do not modify */

/* -*- Mode: vala; indent-tabs-mode: nil; tab-width: 4 -*-*/
/*-
 * Copyright (c) 2014-2015 elementary LLC. (https://elementary.io)
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
 * Authored by: Corentin Noël <corentin@elementaryos.org>
 */

#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>
#include <stdlib.h>
#include <string.h>
#include <appstream.h>
#include <gee.h>
#include <glib/gi18n-lib.h>


#define APP_CENTER_TYPE_VIEW (app_center_view_get_type ())
#define APP_CENTER_VIEW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), APP_CENTER_TYPE_VIEW, AppCenterView))
#define APP_CENTER_VIEW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), APP_CENTER_TYPE_VIEW, AppCenterViewClass))
#define APP_CENTER_IS_VIEW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), APP_CENTER_TYPE_VIEW))
#define APP_CENTER_IS_VIEW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), APP_CENTER_TYPE_VIEW))
#define APP_CENTER_VIEW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), APP_CENTER_TYPE_VIEW, AppCenterViewClass))

typedef struct _AppCenterView AppCenterView;
typedef struct _AppCenterViewClass AppCenterViewClass;
typedef struct _AppCenterViewPrivate AppCenterViewPrivate;

#define APP_CENTER_VIEWS_TYPE_SEARCH_VIEW (app_center_views_search_view_get_type ())
#define APP_CENTER_VIEWS_SEARCH_VIEW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), APP_CENTER_VIEWS_TYPE_SEARCH_VIEW, AppCenterViewsSearchView))
#define APP_CENTER_VIEWS_SEARCH_VIEW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), APP_CENTER_VIEWS_TYPE_SEARCH_VIEW, AppCenterViewsSearchViewClass))
#define APP_CENTER_VIEWS_IS_SEARCH_VIEW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), APP_CENTER_VIEWS_TYPE_SEARCH_VIEW))
#define APP_CENTER_VIEWS_IS_SEARCH_VIEW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), APP_CENTER_VIEWS_TYPE_SEARCH_VIEW))
#define APP_CENTER_VIEWS_SEARCH_VIEW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), APP_CENTER_VIEWS_TYPE_SEARCH_VIEW, AppCenterViewsSearchViewClass))

typedef struct _AppCenterViewsSearchView AppCenterViewsSearchView;
typedef struct _AppCenterViewsSearchViewClass AppCenterViewsSearchViewClass;
typedef struct _AppCenterViewsSearchViewPrivate AppCenterViewsSearchViewPrivate;

#define APP_CENTER_TYPE_ABSTRACT_APP_LIST (app_center_abstract_app_list_get_type ())
#define APP_CENTER_ABSTRACT_APP_LIST(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), APP_CENTER_TYPE_ABSTRACT_APP_LIST, AppCenterAbstractAppList))
#define APP_CENTER_ABSTRACT_APP_LIST_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), APP_CENTER_TYPE_ABSTRACT_APP_LIST, AppCenterAbstractAppListClass))
#define APP_CENTER_IS_ABSTRACT_APP_LIST(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), APP_CENTER_TYPE_ABSTRACT_APP_LIST))
#define APP_CENTER_IS_ABSTRACT_APP_LIST_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), APP_CENTER_TYPE_ABSTRACT_APP_LIST))
#define APP_CENTER_ABSTRACT_APP_LIST_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), APP_CENTER_TYPE_ABSTRACT_APP_LIST, AppCenterAbstractAppListClass))

typedef struct _AppCenterAbstractAppList AppCenterAbstractAppList;
typedef struct _AppCenterAbstractAppListClass AppCenterAbstractAppListClass;

#define APP_CENTER_VIEWS_TYPE_APP_LIST_VIEW (app_center_views_app_list_view_get_type ())
#define APP_CENTER_VIEWS_APP_LIST_VIEW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), APP_CENTER_VIEWS_TYPE_APP_LIST_VIEW, AppCenterViewsAppListView))
#define APP_CENTER_VIEWS_APP_LIST_VIEW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), APP_CENTER_VIEWS_TYPE_APP_LIST_VIEW, AppCenterViewsAppListViewClass))
#define APP_CENTER_VIEWS_IS_APP_LIST_VIEW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), APP_CENTER_VIEWS_TYPE_APP_LIST_VIEW))
#define APP_CENTER_VIEWS_IS_APP_LIST_VIEW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), APP_CENTER_VIEWS_TYPE_APP_LIST_VIEW))
#define APP_CENTER_VIEWS_APP_LIST_VIEW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), APP_CENTER_VIEWS_TYPE_APP_LIST_VIEW, AppCenterViewsAppListViewClass))

typedef struct _AppCenterViewsAppListView AppCenterViewsAppListView;
typedef struct _AppCenterViewsAppListViewClass AppCenterViewsAppListViewClass;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

#define APP_CENTER_CORE_TYPE_CLIENT (app_center_core_client_get_type ())
#define APP_CENTER_CORE_CLIENT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), APP_CENTER_CORE_TYPE_CLIENT, AppCenterCoreClient))
#define APP_CENTER_CORE_CLIENT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), APP_CENTER_CORE_TYPE_CLIENT, AppCenterCoreClientClass))
#define APP_CENTER_CORE_IS_CLIENT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), APP_CENTER_CORE_TYPE_CLIENT))
#define APP_CENTER_CORE_IS_CLIENT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), APP_CENTER_CORE_TYPE_CLIENT))
#define APP_CENTER_CORE_CLIENT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), APP_CENTER_CORE_TYPE_CLIENT, AppCenterCoreClientClass))

typedef struct _AppCenterCoreClient AppCenterCoreClient;
typedef struct _AppCenterCoreClientClass AppCenterCoreClientClass;

#define APP_CENTER_CORE_TYPE_PACKAGE (app_center_core_package_get_type ())
#define APP_CENTER_CORE_PACKAGE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), APP_CENTER_CORE_TYPE_PACKAGE, AppCenterCorePackage))
#define APP_CENTER_CORE_PACKAGE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), APP_CENTER_CORE_TYPE_PACKAGE, AppCenterCorePackageClass))
#define APP_CENTER_CORE_IS_PACKAGE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), APP_CENTER_CORE_TYPE_PACKAGE))
#define APP_CENTER_CORE_IS_PACKAGE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), APP_CENTER_CORE_TYPE_PACKAGE))
#define APP_CENTER_CORE_PACKAGE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), APP_CENTER_CORE_TYPE_PACKAGE, AppCenterCorePackageClass))

typedef struct _AppCenterCorePackage AppCenterCorePackage;
typedef struct _AppCenterCorePackageClass AppCenterCorePackageClass;

struct _AppCenterView {
	GtkStack parent_instance;
	AppCenterViewPrivate * priv;
};

struct _AppCenterViewClass {
	GtkStackClass parent_class;
	void (*return_clicked) (AppCenterView* self);
};

struct _AppCenterViewsSearchView {
	AppCenterView parent_instance;
	AppCenterViewsSearchViewPrivate * priv;
};

struct _AppCenterViewsSearchViewClass {
	AppCenterViewClass parent_class;
};

struct _AppCenterViewsSearchViewPrivate {
	AppCenterViewsAppListView* app_list_view;
	gboolean _viewing_package;
};


static gpointer app_center_views_search_view_parent_class = NULL;

GType app_center_view_get_type (void) G_GNUC_CONST;
GType app_center_views_search_view_get_type (void) G_GNUC_CONST;
GType app_center_abstract_app_list_get_type (void) G_GNUC_CONST;
GType app_center_views_app_list_view_get_type (void) G_GNUC_CONST;
#define APP_CENTER_VIEWS_SEARCH_VIEW_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), APP_CENTER_VIEWS_TYPE_SEARCH_VIEW, AppCenterViewsSearchViewPrivate))
enum  {
	APP_CENTER_VIEWS_SEARCH_VIEW_DUMMY_PROPERTY,
	APP_CENTER_VIEWS_SEARCH_VIEW_VIEWING_PACKAGE
};
AppCenterViewsSearchView* app_center_views_search_view_new (void);
AppCenterViewsSearchView* app_center_views_search_view_construct (GType object_type);
AppCenterView* app_center_view_construct (GType object_type);
static void app_center_views_search_view_real_return_clicked (AppCenterView* base);
static void app_center_views_search_view_set_viewing_package (AppCenterViewsSearchView* self, gboolean value);
void app_center_views_search_view_search (AppCenterViewsSearchView* self, const gchar* search_term, AsCategory* category);
void app_center_abstract_app_list_clear (AppCenterAbstractAppList* self);
GType app_center_core_client_get_type (void) G_GNUC_CONST;
AppCenterCoreClient* app_center_core_client_get_default (void);
GType app_center_core_package_get_type (void) G_GNUC_CONST;
GeeCollection* app_center_core_client_search_applications (AppCenterCoreClient* self, const gchar* query, AsCategory* category);
void app_center_abstract_app_list_add_packages (AppCenterAbstractAppList* self, GeeCollection* packages);
gboolean app_center_views_search_view_get_viewing_package (AppCenterViewsSearchView* self);
static GObject * app_center_views_search_view_constructor (GType type, guint n_construct_properties, GObjectConstructParam * construct_properties);
AppCenterViewsAppListView* app_center_views_app_list_view_new (void);
AppCenterViewsAppListView* app_center_views_app_list_view_construct (GType object_type);
static void _app_center_views_search_view___lambda94_ (AppCenterViewsSearchView* self, AppCenterCorePackage* package);
void app_center_view_show_package (AppCenterView* self, AppCenterCorePackage* package);
static void __app_center_views_search_view___lambda94__app_center_abstract_app_list_show_app (AppCenterAbstractAppList* _sender, AppCenterCorePackage* package, gpointer self);
static void app_center_views_search_view_finalize (GObject* obj);
static void _vala_app_center_views_search_view_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
static void _vala_app_center_views_search_view_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec);


AppCenterViewsSearchView* app_center_views_search_view_construct (GType object_type) {
	AppCenterViewsSearchView * self = NULL;
#line 28 "/home/kedarbrooks/Documents/Projects/AppStore/src/Views/SearchView.vala"
	self = (AppCenterViewsSearchView*) app_center_view_construct (object_type);
#line 28 "/home/kedarbrooks/Documents/Projects/AppStore/src/Views/SearchView.vala"
	return self;
#line 164 "SearchView.c"
}


AppCenterViewsSearchView* app_center_views_search_view_new (void) {
#line 28 "/home/kedarbrooks/Documents/Projects/AppStore/src/Views/SearchView.vala"
	return app_center_views_search_view_construct (APP_CENTER_VIEWS_TYPE_SEARCH_VIEW);
#line 171 "SearchView.c"
}


static void app_center_views_search_view_real_return_clicked (AppCenterView* base) {
	AppCenterViewsSearchView * self;
	AppCenterViewsAppListView* _tmp0_ = NULL;
#line 43 "/home/kedarbrooks/Documents/Projects/AppStore/src/Views/SearchView.vala"
	self = (AppCenterViewsSearchView*) base;
#line 44 "/home/kedarbrooks/Documents/Projects/AppStore/src/Views/SearchView.vala"
	app_center_views_search_view_set_viewing_package (self, FALSE);
#line 45 "/home/kedarbrooks/Documents/Projects/AppStore/src/Views/SearchView.vala"
	_tmp0_ = self->priv->app_list_view;
#line 45 "/home/kedarbrooks/Documents/Projects/AppStore/src/Views/SearchView.vala"
	gtk_stack_set_visible_child ((GtkStack*) self, (GtkWidget*) _tmp0_);
#line 186 "SearchView.c"
}


void app_center_views_search_view_search (AppCenterViewsSearchView* self, const gchar* search_term, AsCategory* category) {
	AppCenterViewsAppListView* _tmp0_ = NULL;
	AppCenterCoreClient* client = NULL;
	AppCenterCoreClient* _tmp1_ = NULL;
	GeeCollection* found_apps = NULL;
	const gchar* _tmp2_ = NULL;
	AsCategory* _tmp3_ = NULL;
	GeeCollection* _tmp4_ = NULL;
	AppCenterViewsAppListView* _tmp5_ = NULL;
#line 48 "/home/kedarbrooks/Documents/Projects/AppStore/src/Views/SearchView.vala"
	g_return_if_fail (self != NULL);
#line 48 "/home/kedarbrooks/Documents/Projects/AppStore/src/Views/SearchView.vala"
	g_return_if_fail (search_term != NULL);
#line 49 "/home/kedarbrooks/Documents/Projects/AppStore/src/Views/SearchView.vala"
	_tmp0_ = self->priv->app_list_view;
#line 49 "/home/kedarbrooks/Documents/Projects/AppStore/src/Views/SearchView.vala"
	app_center_abstract_app_list_clear ((AppCenterAbstractAppList*) _tmp0_);
#line 50 "/home/kedarbrooks/Documents/Projects/AppStore/src/Views/SearchView.vala"
	_tmp1_ = app_center_core_client_get_default ();
#line 50 "/home/kedarbrooks/Documents/Projects/AppStore/src/Views/SearchView.vala"
	client = _tmp1_;
#line 51 "/home/kedarbrooks/Documents/Projects/AppStore/src/Views/SearchView.vala"
	_tmp2_ = search_term;
#line 51 "/home/kedarbrooks/Documents/Projects/AppStore/src/Views/SearchView.vala"
	_tmp3_ = category;
#line 51 "/home/kedarbrooks/Documents/Projects/AppStore/src/Views/SearchView.vala"
	_tmp4_ = app_center_core_client_search_applications (client, _tmp2_, _tmp3_);
#line 51 "/home/kedarbrooks/Documents/Projects/AppStore/src/Views/SearchView.vala"
	found_apps = _tmp4_;
#line 52 "/home/kedarbrooks/Documents/Projects/AppStore/src/Views/SearchView.vala"
	_tmp5_ = self->priv->app_list_view;
#line 52 "/home/kedarbrooks/Documents/Projects/AppStore/src/Views/SearchView.vala"
	app_center_abstract_app_list_add_packages ((AppCenterAbstractAppList*) _tmp5_, found_apps);
#line 48 "/home/kedarbrooks/Documents/Projects/AppStore/src/Views/SearchView.vala"
	_g_object_unref0 (found_apps);
#line 225 "SearchView.c"
}


gboolean app_center_views_search_view_get_viewing_package (AppCenterViewsSearchView* self) {
	gboolean result;
	gboolean _tmp0_ = FALSE;
#line 26 "/home/kedarbrooks/Documents/Projects/AppStore/src/Views/SearchView.vala"
	g_return_val_if_fail (self != NULL, FALSE);
#line 26 "/home/kedarbrooks/Documents/Projects/AppStore/src/Views/SearchView.vala"
	_tmp0_ = self->priv->_viewing_package;
#line 26 "/home/kedarbrooks/Documents/Projects/AppStore/src/Views/SearchView.vala"
	result = _tmp0_;
#line 26 "/home/kedarbrooks/Documents/Projects/AppStore/src/Views/SearchView.vala"
	return result;
#line 240 "SearchView.c"
}


static void app_center_views_search_view_set_viewing_package (AppCenterViewsSearchView* self, gboolean value) {
	gboolean _tmp0_ = FALSE;
#line 26 "/home/kedarbrooks/Documents/Projects/AppStore/src/Views/SearchView.vala"
	g_return_if_fail (self != NULL);
#line 26 "/home/kedarbrooks/Documents/Projects/AppStore/src/Views/SearchView.vala"
	_tmp0_ = value;
#line 26 "/home/kedarbrooks/Documents/Projects/AppStore/src/Views/SearchView.vala"
	self->priv->_viewing_package = _tmp0_;
#line 26 "/home/kedarbrooks/Documents/Projects/AppStore/src/Views/SearchView.vala"
	g_object_notify ((GObject *) self, "viewing-package");
#line 254 "SearchView.c"
}


static void _app_center_views_search_view___lambda94_ (AppCenterViewsSearchView* self, AppCenterCorePackage* package) {
	const gchar* _tmp0_ = NULL;
	AppCenterCorePackage* _tmp1_ = NULL;
#line 35 "/home/kedarbrooks/Documents/Projects/AppStore/src/Views/SearchView.vala"
	g_return_if_fail (package != NULL);
#line 37 "/home/kedarbrooks/Documents/Projects/AppStore/src/Views/SearchView.vala"
	_tmp0_ = C_ ("view", "Search");
#line 37 "/home/kedarbrooks/Documents/Projects/AppStore/src/Views/SearchView.vala"
	g_signal_emit_by_name ((AppCenterView*) self, "subview-entered", _tmp0_, FALSE, NULL);
#line 38 "/home/kedarbrooks/Documents/Projects/AppStore/src/Views/SearchView.vala"
	app_center_views_search_view_set_viewing_package (self, TRUE);
#line 39 "/home/kedarbrooks/Documents/Projects/AppStore/src/Views/SearchView.vala"
	_tmp1_ = package;
#line 39 "/home/kedarbrooks/Documents/Projects/AppStore/src/Views/SearchView.vala"
	app_center_view_show_package ((AppCenterView*) self, _tmp1_);
#line 273 "SearchView.c"
}


static void __app_center_views_search_view___lambda94__app_center_abstract_app_list_show_app (AppCenterAbstractAppList* _sender, AppCenterCorePackage* package, gpointer self) {
#line 35 "/home/kedarbrooks/Documents/Projects/AppStore/src/Views/SearchView.vala"
	_app_center_views_search_view___lambda94_ ((AppCenterViewsSearchView*) self, package);
#line 280 "SearchView.c"
}


static GObject * app_center_views_search_view_constructor (GType type, guint n_construct_properties, GObjectConstructParam * construct_properties) {
	GObject * obj;
	GObjectClass * parent_class;
	AppCenterViewsSearchView * self;
	AppCenterViewsAppListView* _tmp0_ = NULL;
	AppCenterViewsAppListView* _tmp1_ = NULL;
	AppCenterViewsAppListView* _tmp2_ = NULL;
#line 32 "/home/kedarbrooks/Documents/Projects/AppStore/src/Views/SearchView.vala"
	parent_class = G_OBJECT_CLASS (app_center_views_search_view_parent_class);
#line 32 "/home/kedarbrooks/Documents/Projects/AppStore/src/Views/SearchView.vala"
	obj = parent_class->constructor (type, n_construct_properties, construct_properties);
#line 32 "/home/kedarbrooks/Documents/Projects/AppStore/src/Views/SearchView.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, APP_CENTER_VIEWS_TYPE_SEARCH_VIEW, AppCenterViewsSearchView);
#line 33 "/home/kedarbrooks/Documents/Projects/AppStore/src/Views/SearchView.vala"
	_tmp0_ = app_center_views_app_list_view_new ();
#line 33 "/home/kedarbrooks/Documents/Projects/AppStore/src/Views/SearchView.vala"
	g_object_ref_sink (_tmp0_);
#line 33 "/home/kedarbrooks/Documents/Projects/AppStore/src/Views/SearchView.vala"
	_g_object_unref0 (self->priv->app_list_view);
#line 33 "/home/kedarbrooks/Documents/Projects/AppStore/src/Views/SearchView.vala"
	self->priv->app_list_view = _tmp0_;
#line 34 "/home/kedarbrooks/Documents/Projects/AppStore/src/Views/SearchView.vala"
	_tmp1_ = self->priv->app_list_view;
#line 34 "/home/kedarbrooks/Documents/Projects/AppStore/src/Views/SearchView.vala"
	gtk_container_add ((GtkContainer*) self, (GtkWidget*) _tmp1_);
#line 35 "/home/kedarbrooks/Documents/Projects/AppStore/src/Views/SearchView.vala"
	_tmp2_ = self->priv->app_list_view;
#line 35 "/home/kedarbrooks/Documents/Projects/AppStore/src/Views/SearchView.vala"
	g_signal_connect_object ((AppCenterAbstractAppList*) _tmp2_, "show-app", (GCallback) __app_center_views_search_view___lambda94__app_center_abstract_app_list_show_app, self, 0);
#line 32 "/home/kedarbrooks/Documents/Projects/AppStore/src/Views/SearchView.vala"
	return obj;
#line 315 "SearchView.c"
}


static void app_center_views_search_view_class_init (AppCenterViewsSearchViewClass * klass) {
#line 23 "/home/kedarbrooks/Documents/Projects/AppStore/src/Views/SearchView.vala"
	app_center_views_search_view_parent_class = g_type_class_peek_parent (klass);
#line 23 "/home/kedarbrooks/Documents/Projects/AppStore/src/Views/SearchView.vala"
	g_type_class_add_private (klass, sizeof (AppCenterViewsSearchViewPrivate));
#line 23 "/home/kedarbrooks/Documents/Projects/AppStore/src/Views/SearchView.vala"
	((AppCenterViewClass *) klass)->return_clicked = (void (*)(AppCenterView*)) app_center_views_search_view_real_return_clicked;
#line 23 "/home/kedarbrooks/Documents/Projects/AppStore/src/Views/SearchView.vala"
	G_OBJECT_CLASS (klass)->get_property = _vala_app_center_views_search_view_get_property;
#line 23 "/home/kedarbrooks/Documents/Projects/AppStore/src/Views/SearchView.vala"
	G_OBJECT_CLASS (klass)->set_property = _vala_app_center_views_search_view_set_property;
#line 23 "/home/kedarbrooks/Documents/Projects/AppStore/src/Views/SearchView.vala"
	G_OBJECT_CLASS (klass)->constructor = app_center_views_search_view_constructor;
#line 23 "/home/kedarbrooks/Documents/Projects/AppStore/src/Views/SearchView.vala"
	G_OBJECT_CLASS (klass)->finalize = app_center_views_search_view_finalize;
#line 23 "/home/kedarbrooks/Documents/Projects/AppStore/src/Views/SearchView.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), APP_CENTER_VIEWS_SEARCH_VIEW_VIEWING_PACKAGE, g_param_spec_boolean ("viewing-package", "viewing-package", "viewing-package", FALSE, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE));
#line 336 "SearchView.c"
}


static void app_center_views_search_view_instance_init (AppCenterViewsSearchView * self) {
#line 23 "/home/kedarbrooks/Documents/Projects/AppStore/src/Views/SearchView.vala"
	self->priv = APP_CENTER_VIEWS_SEARCH_VIEW_GET_PRIVATE (self);
#line 26 "/home/kedarbrooks/Documents/Projects/AppStore/src/Views/SearchView.vala"
	self->priv->_viewing_package = FALSE;
#line 345 "SearchView.c"
}


static void app_center_views_search_view_finalize (GObject* obj) {
	AppCenterViewsSearchView * self;
#line 23 "/home/kedarbrooks/Documents/Projects/AppStore/src/Views/SearchView.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, APP_CENTER_VIEWS_TYPE_SEARCH_VIEW, AppCenterViewsSearchView);
#line 24 "/home/kedarbrooks/Documents/Projects/AppStore/src/Views/SearchView.vala"
	_g_object_unref0 (self->priv->app_list_view);
#line 23 "/home/kedarbrooks/Documents/Projects/AppStore/src/Views/SearchView.vala"
	G_OBJECT_CLASS (app_center_views_search_view_parent_class)->finalize (obj);
#line 357 "SearchView.c"
}


GType app_center_views_search_view_get_type (void) {
	static volatile gsize app_center_views_search_view_type_id__volatile = 0;
	if (g_once_init_enter (&app_center_views_search_view_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (AppCenterViewsSearchViewClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) app_center_views_search_view_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (AppCenterViewsSearchView), 0, (GInstanceInitFunc) app_center_views_search_view_instance_init, NULL };
		GType app_center_views_search_view_type_id;
		app_center_views_search_view_type_id = g_type_register_static (APP_CENTER_TYPE_VIEW, "AppCenterViewsSearchView", &g_define_type_info, 0);
		g_once_init_leave (&app_center_views_search_view_type_id__volatile, app_center_views_search_view_type_id);
	}
	return app_center_views_search_view_type_id__volatile;
}


static void _vala_app_center_views_search_view_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	AppCenterViewsSearchView * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, APP_CENTER_VIEWS_TYPE_SEARCH_VIEW, AppCenterViewsSearchView);
#line 23 "/home/kedarbrooks/Documents/Projects/AppStore/src/Views/SearchView.vala"
	switch (property_id) {
#line 23 "/home/kedarbrooks/Documents/Projects/AppStore/src/Views/SearchView.vala"
		case APP_CENTER_VIEWS_SEARCH_VIEW_VIEWING_PACKAGE:
#line 23 "/home/kedarbrooks/Documents/Projects/AppStore/src/Views/SearchView.vala"
		g_value_set_boolean (value, app_center_views_search_view_get_viewing_package (self));
#line 23 "/home/kedarbrooks/Documents/Projects/AppStore/src/Views/SearchView.vala"
		break;
#line 384 "SearchView.c"
		default:
#line 23 "/home/kedarbrooks/Documents/Projects/AppStore/src/Views/SearchView.vala"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 23 "/home/kedarbrooks/Documents/Projects/AppStore/src/Views/SearchView.vala"
		break;
#line 390 "SearchView.c"
	}
}


static void _vala_app_center_views_search_view_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec) {
	AppCenterViewsSearchView * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, APP_CENTER_VIEWS_TYPE_SEARCH_VIEW, AppCenterViewsSearchView);
#line 23 "/home/kedarbrooks/Documents/Projects/AppStore/src/Views/SearchView.vala"
	switch (property_id) {
#line 23 "/home/kedarbrooks/Documents/Projects/AppStore/src/Views/SearchView.vala"
		case APP_CENTER_VIEWS_SEARCH_VIEW_VIEWING_PACKAGE:
#line 23 "/home/kedarbrooks/Documents/Projects/AppStore/src/Views/SearchView.vala"
		app_center_views_search_view_set_viewing_package (self, g_value_get_boolean (value));
#line 23 "/home/kedarbrooks/Documents/Projects/AppStore/src/Views/SearchView.vala"
		break;
#line 406 "SearchView.c"
		default:
#line 23 "/home/kedarbrooks/Documents/Projects/AppStore/src/Views/SearchView.vala"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 23 "/home/kedarbrooks/Documents/Projects/AppStore/src/Views/SearchView.vala"
		break;
#line 412 "SearchView.c"
	}
}



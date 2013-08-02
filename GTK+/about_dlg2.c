/* about_dlg2.c generated by valac 0.20.1, the Vala compiler
 * generated from about_dlg2.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>
#include <stdlib.h>
#include <string.h>
#include <gio/gio.h>


#define TYPE_ABOUT_DIALOG_DUA (about_dialog_dua_get_type ())
#define ABOUT_DIALOG_DUA(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_ABOUT_DIALOG_DUA, AboutDialogDua))
#define ABOUT_DIALOG_DUA_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_ABOUT_DIALOG_DUA, AboutDialogDuaClass))
#define IS_ABOUT_DIALOG_DUA(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_ABOUT_DIALOG_DUA))
#define IS_ABOUT_DIALOG_DUA_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_ABOUT_DIALOG_DUA))
#define ABOUT_DIALOG_DUA_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_ABOUT_DIALOG_DUA, AboutDialogDuaClass))

typedef struct _AboutDialogDua AboutDialogDua;
typedef struct _AboutDialogDuaClass AboutDialogDuaClass;
typedef struct _AboutDialogDuaPrivate AboutDialogDuaPrivate;
typedef struct _Block1Data Block1Data;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _AboutDialogDua {
	GtkApplication parent_instance;
	AboutDialogDuaPrivate * priv;
};

struct _AboutDialogDuaClass {
	GtkApplicationClass parent_class;
};

struct _Block1Data {
	int _ref_count_;
	GtkAboutDialog* dlg;
};


static gpointer about_dialog_dua_parent_class = NULL;

void button_toggled (GtkToggleButton* own, GtkToggleButton* other);
GType about_dialog_dua_get_type (void) G_GNUC_CONST;
enum  {
	ABOUT_DIALOG_DUA_DUMMY_PROPERTY
};
#define ABOUT_DIALOG_DUA_COMMENTS "Contoh about dialog dengan vala."
AboutDialogDua* about_dialog_dua_new (void);
AboutDialogDua* about_dialog_dua_construct (GType object_type);
static gint about_dialog_dua_main (gchar** args, int args_length1);
static Block1Data* block1_data_ref (Block1Data* _data1_);
static void block1_data_unref (void * _userdata_);
static void _gtk_main_quit_gtk_widget_destroy (GtkWidget* _sender, gpointer self);
static void __lambda2_ (Block1Data* _data1_, gint response_id);
static void ___lambda2__gtk_dialog_response (GtkDialog* _sender, gint response_id, gpointer self);
static void __lambda3_ (Block1Data* _data1_);
static void ___lambda3__gtk_dialog_close (GtkDialog* _sender, gpointer self);
static void __lambda4_ (Block1Data* _data1_);
static void ___lambda4__gtk_button_clicked (GtkButton* _sender, gpointer self);
static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func);
static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func);


/**
 * Komentar program
 */
void button_toggled (GtkToggleButton* own, GtkToggleButton* other) {
	GtkToggleButton* _tmp0_;
	GtkToggleButton* _tmp1_;
	gboolean _tmp2_ = FALSE;
	g_return_if_fail (own != NULL);
	g_return_if_fail (other != NULL);
	_tmp0_ = other;
	_tmp1_ = own;
	_tmp2_ = gtk_toggle_button_get_active (_tmp1_);
	gtk_widget_set_sensitive ((GtkWidget*) _tmp0_, !_tmp2_);
}


AboutDialogDua* about_dialog_dua_construct (GType object_type) {
	AboutDialogDua * self = NULL;
	self = (AboutDialogDua*) g_object_new (object_type, "application-id", "app.demo.dialog", "flags", G_APPLICATION_FLAGS_NONE, NULL);
	return self;
}


AboutDialogDua* about_dialog_dua_new (void) {
	return about_dialog_dua_construct (TYPE_ABOUT_DIALOG_DUA);
}


static Block1Data* block1_data_ref (Block1Data* _data1_) {
	g_atomic_int_inc (&_data1_->_ref_count_);
	return _data1_;
}


static void block1_data_unref (void * _userdata_) {
	Block1Data* _data1_;
	_data1_ = (Block1Data*) _userdata_;
	if (g_atomic_int_dec_and_test (&_data1_->_ref_count_)) {
		_g_object_unref0 (_data1_->dlg);
		g_slice_free (Block1Data, _data1_);
	}
}


static void _gtk_main_quit_gtk_widget_destroy (GtkWidget* _sender, gpointer self) {
	gtk_main_quit ();
}


static void __lambda2_ (Block1Data* _data1_, gint response_id) {
	gboolean _tmp0_ = FALSE;
	gint _tmp1_;
	gboolean _tmp3_;
	_tmp1_ = response_id;
	if (_tmp1_ == ((gint) GTK_RESPONSE_CANCEL)) {
		_tmp0_ = TRUE;
	} else {
		gint _tmp2_;
		_tmp2_ = response_id;
		_tmp0_ = _tmp2_ == ((gint) GTK_RESPONSE_DELETE_EVENT);
	}
	_tmp3_ = _tmp0_;
	if (_tmp3_) {
		gtk_widget_hide_on_delete ((GtkWidget*) _data1_->dlg);
	}
}


static void ___lambda2__gtk_dialog_response (GtkDialog* _sender, gint response_id, gpointer self) {
	__lambda2_ (self, response_id);
}


static void __lambda3_ (Block1Data* _data1_) {
	gtk_widget_hide_on_delete ((GtkWidget*) _data1_->dlg);
}


static void ___lambda3__gtk_dialog_close (GtkDialog* _sender, gpointer self) {
	__lambda3_ (self);
}


static void __lambda4_ (Block1Data* _data1_) {
	gtk_dialog_run ((GtkDialog*) _data1_->dlg);
}


static void ___lambda4__gtk_button_clicked (GtkButton* _sender, gpointer self) {
	__lambda4_ (self);
}


static gint about_dialog_dua_main (gchar** args, int args_length1) {
	gint result = 0;
	Block1Data* _data1_;
	GtkWindow* _tmp0_;
	GtkWindow* window;
	GtkButton* _tmp1_;
	GtkButton* button;
	GtkAboutDialog* _tmp2_;
	gchar* _tmp3_;
	gchar* _tmp4_;
	gchar** _tmp5_ = NULL;
	gchar** _tmp6_;
	gint _tmp6__length1;
	gchar* _tmp7_;
	gchar* _tmp8_;
	gchar** _tmp9_ = NULL;
	gchar** _tmp10_;
	gint _tmp10__length1;
	const gchar* _tmp11_;
	const gchar* _tmp12_;
	_data1_ = g_slice_new0 (Block1Data);
	_data1_->_ref_count_ = 1;
	gtk_init (&args_length1, &args);
	_tmp0_ = (GtkWindow*) gtk_window_new (GTK_WINDOW_TOPLEVEL);
	g_object_ref_sink (_tmp0_);
	window = _tmp0_;
	gtk_window_set_title (window, "About Dialog");
	g_object_set (window, "window-position", GTK_WIN_POS_CENTER, NULL);
	gtk_window_set_default_size (window, 200, 50);
	g_signal_connect ((GtkWidget*) window, "destroy", (GCallback) _gtk_main_quit_gtk_widget_destroy, NULL);
	_tmp1_ = (GtkButton*) gtk_button_new_with_label ("Tentang Saya");
	g_object_ref_sink (_tmp1_);
	button = _tmp1_;
	_tmp2_ = (GtkAboutDialog*) gtk_about_dialog_new ();
	g_object_ref_sink (_tmp2_);
	_data1_->dlg = _tmp2_;
	gtk_window_set_destroy_with_parent ((GtkWindow*) _data1_->dlg, TRUE);
	gtk_window_set_transient_for ((GtkWindow*) _data1_->dlg, window);
	gtk_window_set_modal ((GtkWindow*) _data1_->dlg, TRUE);
	_tmp3_ = g_strdup ("Jackie Chan");
	_tmp4_ = g_strdup ("Jet Lee");
	_tmp5_ = g_new0 (gchar*, 2 + 1);
	_tmp5_[0] = _tmp3_;
	_tmp5_[1] = _tmp4_;
	_tmp6_ = _tmp5_;
	_tmp6__length1 = 2;
	gtk_about_dialog_set_artists (_data1_->dlg, _tmp6_);
	_tmp6_ = (_vala_array_free (_tmp6_, _tmp6__length1, (GDestroyNotify) g_free), NULL);
	_tmp7_ = g_strdup ("Agus Susilo");
	_tmp8_ = g_strdup ("Novi Permata Sari");
	_tmp9_ = g_new0 (gchar*, 2 + 1);
	_tmp9_[0] = _tmp7_;
	_tmp9_[1] = _tmp8_;
	_tmp10_ = _tmp9_;
	_tmp10__length1 = 2;
	gtk_about_dialog_set_authors (_data1_->dlg, _tmp10_);
	_tmp10_ = (_vala_array_free (_tmp10_, _tmp10__length1, (GDestroyNotify) g_free), NULL);
	_tmp11_ = gtk_window_get_title (window);
	_tmp12_ = _tmp11_;
	gtk_about_dialog_set_program_name (_data1_->dlg, _tmp12_);
	gtk_about_dialog_set_comments (_data1_->dlg, ABOUT_DIALOG_DUA_COMMENTS);
	gtk_about_dialog_set_license (_data1_->dlg, "Program ini 100% gratis, tanpa dipungut biaya.");
	gtk_about_dialog_set_website (_data1_->dlg, "http://www.tukangkoding.com");
	gtk_about_dialog_set_website_label (_data1_->dlg, "Tukang Koding");
	g_signal_connect_data ((GtkDialog*) _data1_->dlg, "response", (GCallback) ___lambda2__gtk_dialog_response, block1_data_ref (_data1_), (GClosureNotify) block1_data_unref, 0);
	g_signal_connect_data ((GtkDialog*) _data1_->dlg, "close", (GCallback) ___lambda3__gtk_dialog_close, block1_data_ref (_data1_), (GClosureNotify) block1_data_unref, 0);
	g_object_set ((GtkWidget*) button, "margin", 10, NULL);
	g_signal_connect_data (button, "clicked", (GCallback) ___lambda4__gtk_button_clicked, block1_data_ref (_data1_), (GClosureNotify) block1_data_unref, 0);
	gtk_container_add ((GtkContainer*) window, (GtkWidget*) button);
	gtk_widget_show_all ((GtkWidget*) window);
	gtk_main ();
	result = 0;
	_g_object_unref0 (button);
	_g_object_unref0 (window);
	block1_data_unref (_data1_);
	_data1_ = NULL;
	return result;
}


int main (int argc, char ** argv) {
	g_type_init ();
	return about_dialog_dua_main (argv, argc);
}


static void about_dialog_dua_class_init (AboutDialogDuaClass * klass) {
	about_dialog_dua_parent_class = g_type_class_peek_parent (klass);
}


static void about_dialog_dua_instance_init (AboutDialogDua * self) {
}


GType about_dialog_dua_get_type (void) {
	static volatile gsize about_dialog_dua_type_id__volatile = 0;
	if (g_once_init_enter (&about_dialog_dua_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (AboutDialogDuaClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) about_dialog_dua_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (AboutDialogDua), 0, (GInstanceInitFunc) about_dialog_dua_instance_init, NULL };
		GType about_dialog_dua_type_id;
		about_dialog_dua_type_id = g_type_register_static (GTK_TYPE_APPLICATION, "AboutDialogDua", &g_define_type_info, 0);
		g_once_init_leave (&about_dialog_dua_type_id__volatile, about_dialog_dua_type_id);
	}
	return about_dialog_dua_type_id__volatile;
}


static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func) {
	if ((array != NULL) && (destroy_func != NULL)) {
		int i;
		for (i = 0; i < array_length; i = i + 1) {
			if (((gpointer*) array)[i] != NULL) {
				destroy_func (((gpointer*) array)[i]);
			}
		}
	}
}


static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func) {
	_vala_array_destroy (array, array_length, destroy_func);
	g_free (array);
}



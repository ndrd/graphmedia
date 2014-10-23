/* cancion.c generated by valac 0.26.0, the Vala compiler
 * generated from cancion.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include <float.h>
#include <math.h>
#include <gtk/gtk.h>
#include <gee.h>
#include <sqlite3.h>
#include <gdk-pixbuf/gdk-pixbuf.h>


#define GRAPH_MEDIA_MODELOS_TYPE_ARCHIVO (graph_media_modelos_archivo_get_type ())
#define GRAPH_MEDIA_MODELOS_ARCHIVO(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GRAPH_MEDIA_MODELOS_TYPE_ARCHIVO, GraphMediaModelosArchivo))
#define GRAPH_MEDIA_MODELOS_ARCHIVO_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GRAPH_MEDIA_MODELOS_TYPE_ARCHIVO, GraphMediaModelosArchivoClass))
#define GRAPH_MEDIA_MODELOS_IS_ARCHIVO(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GRAPH_MEDIA_MODELOS_TYPE_ARCHIVO))
#define GRAPH_MEDIA_MODELOS_IS_ARCHIVO_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GRAPH_MEDIA_MODELOS_TYPE_ARCHIVO))
#define GRAPH_MEDIA_MODELOS_ARCHIVO_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GRAPH_MEDIA_MODELOS_TYPE_ARCHIVO, GraphMediaModelosArchivoClass))

typedef struct _GraphMediaModelosArchivo GraphMediaModelosArchivo;
typedef struct _GraphMediaModelosArchivoClass GraphMediaModelosArchivoClass;
typedef struct _GraphMediaModelosArchivoPrivate GraphMediaModelosArchivoPrivate;

#define GRAPH_MEDIA_MODELOS_TYPE_CANCION (graph_media_modelos_cancion_get_type ())
#define GRAPH_MEDIA_MODELOS_CANCION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GRAPH_MEDIA_MODELOS_TYPE_CANCION, GraphMediaModelosCancion))
#define GRAPH_MEDIA_MODELOS_CANCION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GRAPH_MEDIA_MODELOS_TYPE_CANCION, GraphMediaModelosCancionClass))
#define GRAPH_MEDIA_MODELOS_IS_CANCION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GRAPH_MEDIA_MODELOS_TYPE_CANCION))
#define GRAPH_MEDIA_MODELOS_IS_CANCION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GRAPH_MEDIA_MODELOS_TYPE_CANCION))
#define GRAPH_MEDIA_MODELOS_CANCION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GRAPH_MEDIA_MODELOS_TYPE_CANCION, GraphMediaModelosCancionClass))

typedef struct _GraphMediaModelosCancion GraphMediaModelosCancion;
typedef struct _GraphMediaModelosCancionClass GraphMediaModelosCancionClass;
typedef struct _GraphMediaModelosCancionPrivate GraphMediaModelosCancionPrivate;
#define _g_free0(var) (var = (g_free (var), NULL))

#define GRAPH_MEDIA_MODELOS_TYPE_TABLAS (graph_media_modelos_tablas_get_type ())
#define GRAPH_MEDIA_MODELOS_TABLAS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GRAPH_MEDIA_MODELOS_TYPE_TABLAS, GraphMediaModelosTablas))
#define GRAPH_MEDIA_MODELOS_TABLAS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GRAPH_MEDIA_MODELOS_TYPE_TABLAS, GraphMediaModelosTablasClass))
#define GRAPH_MEDIA_MODELOS_IS_TABLAS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GRAPH_MEDIA_MODELOS_TYPE_TABLAS))
#define GRAPH_MEDIA_MODELOS_IS_TABLAS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GRAPH_MEDIA_MODELOS_TYPE_TABLAS))
#define GRAPH_MEDIA_MODELOS_TABLAS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GRAPH_MEDIA_MODELOS_TYPE_TABLAS, GraphMediaModelosTablasClass))

typedef struct _GraphMediaModelosTablas GraphMediaModelosTablas;
typedef struct _GraphMediaModelosTablasClass GraphMediaModelosTablasClass;
typedef struct _GraphMediaModelosTablasPrivate GraphMediaModelosTablasPrivate;

#define GRAPH_MEDIA_MODELOS_TYPE_TABLA_ARCHIVO (graph_media_modelos_tabla_archivo_get_type ())
#define GRAPH_MEDIA_MODELOS_TABLA_ARCHIVO(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GRAPH_MEDIA_MODELOS_TYPE_TABLA_ARCHIVO, GraphMediaModelosTablaArchivo))
#define GRAPH_MEDIA_MODELOS_TABLA_ARCHIVO_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GRAPH_MEDIA_MODELOS_TYPE_TABLA_ARCHIVO, GraphMediaModelosTablaArchivoClass))
#define GRAPH_MEDIA_MODELOS_IS_TABLA_ARCHIVO(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GRAPH_MEDIA_MODELOS_TYPE_TABLA_ARCHIVO))
#define GRAPH_MEDIA_MODELOS_IS_TABLA_ARCHIVO_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GRAPH_MEDIA_MODELOS_TYPE_TABLA_ARCHIVO))
#define GRAPH_MEDIA_MODELOS_TABLA_ARCHIVO_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GRAPH_MEDIA_MODELOS_TYPE_TABLA_ARCHIVO, GraphMediaModelosTablaArchivoClass))

typedef struct _GraphMediaModelosTablaArchivo GraphMediaModelosTablaArchivo;
typedef struct _GraphMediaModelosTablaArchivoClass GraphMediaModelosTablaArchivoClass;
typedef struct _GraphMediaModelosTablaArchivoPrivate GraphMediaModelosTablaArchivoPrivate;

#define GRAPH_MEDIA_MODELOS_TYPE_FILTRABLE (graph_media_modelos_filtrable_get_type ())
#define GRAPH_MEDIA_MODELOS_FILTRABLE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GRAPH_MEDIA_MODELOS_TYPE_FILTRABLE, GraphMediaModelosFiltrable))
#define GRAPH_MEDIA_MODELOS_IS_FILTRABLE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GRAPH_MEDIA_MODELOS_TYPE_FILTRABLE))
#define GRAPH_MEDIA_MODELOS_FILTRABLE_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), GRAPH_MEDIA_MODELOS_TYPE_FILTRABLE, GraphMediaModelosFiltrableIface))

typedef struct _GraphMediaModelosFiltrable GraphMediaModelosFiltrable;
typedef struct _GraphMediaModelosFiltrableIface GraphMediaModelosFiltrableIface;

#define GRAPH_MEDIA_MODELOS_TYPE_CANCIONES (graph_media_modelos_canciones_get_type ())
#define GRAPH_MEDIA_MODELOS_CANCIONES(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GRAPH_MEDIA_MODELOS_TYPE_CANCIONES, GraphMediaModelosCanciones))
#define GRAPH_MEDIA_MODELOS_CANCIONES_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GRAPH_MEDIA_MODELOS_TYPE_CANCIONES, GraphMediaModelosCancionesClass))
#define GRAPH_MEDIA_MODELOS_IS_CANCIONES(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GRAPH_MEDIA_MODELOS_TYPE_CANCIONES))
#define GRAPH_MEDIA_MODELOS_IS_CANCIONES_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GRAPH_MEDIA_MODELOS_TYPE_CANCIONES))
#define GRAPH_MEDIA_MODELOS_CANCIONES_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GRAPH_MEDIA_MODELOS_TYPE_CANCIONES, GraphMediaModelosCancionesClass))

typedef struct _GraphMediaModelosCanciones GraphMediaModelosCanciones;
typedef struct _GraphMediaModelosCancionesClass GraphMediaModelosCancionesClass;
typedef struct _GraphMediaModelosCancionesPrivate GraphMediaModelosCancionesPrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _graph_media_modelos_archivo_unref0(var) ((var == NULL) ? NULL : (var = (graph_media_modelos_archivo_unref (var), NULL)))
#define _sqlite3_finalize0(var) ((var == NULL) ? NULL : (var = (sqlite3_finalize (var), NULL)))
typedef struct _Block5Data Block5Data;
#define __g_list_free__gtk_tree_path_free0_0(var) ((var == NULL) ? NULL : (var = (_g_list_free__gtk_tree_path_free0_ (var), NULL)))
#define _gtk_tree_path_free0(var) ((var == NULL) ? NULL : (var = (gtk_tree_path_free (var), NULL)))
#define _vala_assert(expr, msg) if G_LIKELY (expr) ; else g_assertion_message_expr (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, msg);

struct _GraphMediaModelosArchivo {
	GTypeInstance parent_instance;
	volatile int ref_count;
	GraphMediaModelosArchivoPrivate * priv;
	gint64 id;
	gchar* nombre;
	gchar* ubicacion;
	gchar* tipo;
	gchar* u_acceso;
	gdouble popularidad;
	gboolean disponible;
};

struct _GraphMediaModelosArchivoClass {
	GTypeClass parent_class;
	void (*finalize) (GraphMediaModelosArchivo *self);
};

struct _GraphMediaModelosCancion {
	GraphMediaModelosArchivo parent_instance;
	GraphMediaModelosCancionPrivate * priv;
	gchar* imagen;
};

struct _GraphMediaModelosCancionClass {
	GraphMediaModelosArchivoClass parent_class;
};

struct _GraphMediaModelosTablas {
	GObject parent_instance;
	GraphMediaModelosTablasPrivate * priv;
	gchar* nombre_tabla;
};

struct _GraphMediaModelosTablasClass {
	GObjectClass parent_class;
};

struct _GraphMediaModelosTablaArchivo {
	GraphMediaModelosTablas parent_instance;
	GraphMediaModelosTablaArchivoPrivate * priv;
};

struct _GraphMediaModelosTablaArchivoClass {
	GraphMediaModelosTablasClass parent_class;
};

struct _GraphMediaModelosFiltrableIface {
	GTypeInterface parent_iface;
	GtkIconView* (*filtrar) (GraphMediaModelosFiltrable* self, const gchar* consulta, gint lim);
};

struct _GraphMediaModelosCanciones {
	GraphMediaModelosTablaArchivo parent_instance;
	GraphMediaModelosCancionesPrivate * priv;
};

struct _GraphMediaModelosCancionesClass {
	GraphMediaModelosTablaArchivoClass parent_class;
};

struct _GraphMediaModelosCancionesPrivate {
	GraphMediaModelosTablaArchivo* archivos;
};

typedef enum  {
	GRAPH_MEDIA_MODELOS_ERROR_BASE_DATOS_ARCHIVO_NO_ENCONTRADO,
	GRAPH_MEDIA_MODELOS_ERROR_BASE_DATOS_ARCHIVO_INVALIDO,
	GRAPH_MEDIA_MODELOS_ERROR_BASE_DATOS_CONSULTA
} GraphMediaModelosErrorBaseDatos;
#define GRAPH_MEDIA_MODELOS_ERROR_BASE_DATOS graph_media_modelos_error_base_datos_quark ()
struct _Block5Data {
	int _ref_count_;
	GraphMediaModelosCanciones* self;
	GtkListStore* model;
	GtkIconView* vista;
	GtkTreeIter iter;
};


static gpointer graph_media_modelos_cancion_parent_class = NULL;
static gpointer graph_media_modelos_canciones_parent_class = NULL;
static GraphMediaModelosCanciones* graph_media_modelos_canciones_instancia;
static GraphMediaModelosCanciones* graph_media_modelos_canciones_instancia = NULL;
extern sqlite3* graph_media_modelos_tablas_bd;
extern gint64 graph_media_modelos_app_gui_index_actual;
static GraphMediaModelosFiltrableIface* graph_media_modelos_canciones_graph_media_modelos_filtrable_parent_iface = NULL;

gpointer graph_media_modelos_archivo_ref (gpointer instance);
void graph_media_modelos_archivo_unref (gpointer instance);
GParamSpec* graph_media_modelos_param_spec_archivo (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void graph_media_modelos_value_set_archivo (GValue* value, gpointer v_object);
void graph_media_modelos_value_take_archivo (GValue* value, gpointer v_object);
gpointer graph_media_modelos_value_get_archivo (const GValue* value);
GType graph_media_modelos_archivo_get_type (void) G_GNUC_CONST;
GType graph_media_modelos_cancion_get_type (void) G_GNUC_CONST;
enum  {
	GRAPH_MEDIA_MODELOS_CANCION_DUMMY_PROPERTY
};
#define GRAPH_MEDIA_MODELOS_CANCION_TIPO "audio"
GraphMediaModelosCancion* graph_media_modelos_cancion_new (void);
GraphMediaModelosCancion* graph_media_modelos_cancion_construct (GType object_type);
GraphMediaModelosArchivo* graph_media_modelos_archivo_new (void);
GraphMediaModelosArchivo* graph_media_modelos_archivo_construct (GType object_type);
static void graph_media_modelos_cancion_finalize (GraphMediaModelosArchivo* obj);
GType graph_media_modelos_tablas_get_type (void) G_GNUC_CONST;
GType graph_media_modelos_tabla_archivo_get_type (void) G_GNUC_CONST;
GType graph_media_modelos_filtrable_get_type (void) G_GNUC_CONST;
GType graph_media_modelos_canciones_get_type (void) G_GNUC_CONST;
#define GRAPH_MEDIA_MODELOS_CANCIONES_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), GRAPH_MEDIA_MODELOS_TYPE_CANCIONES, GraphMediaModelosCancionesPrivate))
enum  {
	GRAPH_MEDIA_MODELOS_CANCIONES_DUMMY_PROPERTY
};
static GraphMediaModelosCanciones* graph_media_modelos_canciones_new (void);
static GraphMediaModelosCanciones* graph_media_modelos_canciones_construct (GType object_type);
GraphMediaModelosTablaArchivo* graph_media_modelos_tabla_archivo_new (void);
GraphMediaModelosTablaArchivo* graph_media_modelos_tabla_archivo_construct (GType object_type);
GraphMediaModelosTablaArchivo* graph_media_modelos_tabla_archivo_get_instancia (void);
GraphMediaModelosCanciones* graph_media_modelos_canciones_get_instancia (void);
GraphMediaModelosCancion* graph_media_modelos_canciones_agregar (GraphMediaModelosCanciones* self, GraphMediaModelosCancion* cancion);
GraphMediaModelosArchivo* graph_media_modelos_tabla_archivo_agregar (GraphMediaModelosTablaArchivo* self, GraphMediaModelosArchivo* archivo);
GraphMediaModelosCancion* graph_media_modelos_canciones_eliminar (GraphMediaModelosCanciones* self, GraphMediaModelosCancion* cancion);
GQuark graph_media_modelos_error_base_datos_quark (void);
GraphMediaModelosArchivo* graph_media_modelos_tabla_archivo_eliminar (GraphMediaModelosTablaArchivo* self, GraphMediaModelosArchivo* p, GError** error);
gboolean graph_media_modelos_canciones_editar (GraphMediaModelosCanciones* self, GraphMediaModelosCancion* cancion);
gboolean graph_media_modelos_tabla_archivo_editar (GraphMediaModelosTablaArchivo* self, GraphMediaModelosArchivo* p);
gint graph_media_modelos_canciones_get_total_canciones (GraphMediaModelosCanciones* self);
gint graph_media_modelos_tabla_archivo_get_total_tipo (GraphMediaModelosTablaArchivo* self, const gchar* tipo);
static GeeArrayList* graph_media_modelos_canciones_get_canciones (GraphMediaModelosCanciones* self, const gchar* where, gint lim);
GeeArrayList* graph_media_modelos_tabla_archivo_get_archivos (GraphMediaModelosTablaArchivo* self, const gchar* where, gint limite, const gchar* orden);
GraphMediaModelosCancion* graph_media_modelos_archivo_cast_cancion (GraphMediaModelosArchivo* a);
GraphMediaModelosCancion* graph_media_modelos_canciones_get_cancion_por_id (GraphMediaModelosCanciones* self, gint64 id);
GraphMediaModelosArchivo* graph_media_modelos_tabla_archivo_get_archivo_id (GraphMediaModelosTablaArchivo* self, gint64 id);
GeeArrayList* graph_media_modelos_canciones_buscar_canciones_por_nombre (GraphMediaModelosCanciones* self, const gchar* nombre, gint limite, const gchar* orden);
static GtkIconView* graph_media_modelos_canciones_real_filtrar (GraphMediaModelosFiltrable* base, const gchar* consulta, gint lim);
static Block5Data* block5_data_ref (Block5Data* _data5_);
static void block5_data_unref (void * _userdata_);
GdkPixbuf* graph_media_modelos_filtrable_cargar_icono_ubicacion (GraphMediaModelosFiltrable* self, const gchar* ubicacion, gint h, gint w);
static void __lambda6_ (Block5Data* _data5_);
static void _gtk_tree_path_free0_ (gpointer var);
static void _g_list_free__gtk_tree_path_free0_ (GList* self);
static void ___lambda6__gtk_icon_view_selection_changed (GtkIconView* _sender, gpointer self);
static void graph_media_modelos_canciones_finalize (GObject* obj);


GraphMediaModelosCancion* graph_media_modelos_cancion_construct (GType object_type) {
	GraphMediaModelosCancion* self = NULL;
	gchar* _tmp0_ = NULL;
	self = (GraphMediaModelosCancion*) graph_media_modelos_archivo_construct (object_type);
	((GraphMediaModelosArchivo*) self)->id = (gint64) (-1);
	_tmp0_ = g_strdup (GRAPH_MEDIA_MODELOS_CANCION_TIPO);
	_g_free0 (((GraphMediaModelosArchivo*) self)->tipo);
	((GraphMediaModelosArchivo*) self)->tipo = _tmp0_;
	return self;
}


GraphMediaModelosCancion* graph_media_modelos_cancion_new (void) {
	return graph_media_modelos_cancion_construct (GRAPH_MEDIA_MODELOS_TYPE_CANCION);
}


static void graph_media_modelos_cancion_class_init (GraphMediaModelosCancionClass * klass) {
	graph_media_modelos_cancion_parent_class = g_type_class_peek_parent (klass);
	((GraphMediaModelosArchivoClass *) klass)->finalize = graph_media_modelos_cancion_finalize;
}


static void graph_media_modelos_cancion_instance_init (GraphMediaModelosCancion * self) {
}


static void graph_media_modelos_cancion_finalize (GraphMediaModelosArchivo* obj) {
	GraphMediaModelosCancion * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, GRAPH_MEDIA_MODELOS_TYPE_CANCION, GraphMediaModelosCancion);
	_g_free0 (self->imagen);
	GRAPH_MEDIA_MODELOS_ARCHIVO_CLASS (graph_media_modelos_cancion_parent_class)->finalize (obj);
}


/**
* Clase que modela los arhivos de audio de la biblioteca, usa los mismos 
* atributos que Archivo, ademas de la caratula que representa el archivo
* Parece una buena alternativa obtener las etiquetas del archivo aqui mismo.
*/
GType graph_media_modelos_cancion_get_type (void) {
	static volatile gsize graph_media_modelos_cancion_type_id__volatile = 0;
	if (g_once_init_enter (&graph_media_modelos_cancion_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (GraphMediaModelosCancionClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) graph_media_modelos_cancion_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (GraphMediaModelosCancion), 0, (GInstanceInitFunc) graph_media_modelos_cancion_instance_init, NULL };
		GType graph_media_modelos_cancion_type_id;
		graph_media_modelos_cancion_type_id = g_type_register_static (GRAPH_MEDIA_MODELOS_TYPE_ARCHIVO, "GraphMediaModelosCancion", &g_define_type_info, 0);
		g_once_init_leave (&graph_media_modelos_cancion_type_id__volatile, graph_media_modelos_cancion_type_id);
	}
	return graph_media_modelos_cancion_type_id__volatile;
}


static GraphMediaModelosCanciones* graph_media_modelos_canciones_construct (GType object_type) {
	GraphMediaModelosCanciones * self = NULL;
	GraphMediaModelosTablaArchivo* _tmp0_ = NULL;
	self = (GraphMediaModelosCanciones*) graph_media_modelos_tabla_archivo_construct (object_type);
	_tmp0_ = graph_media_modelos_tabla_archivo_get_instancia ();
	_g_object_unref0 (self->priv->archivos);
	self->priv->archivos = _tmp0_;
	return self;
}


static GraphMediaModelosCanciones* graph_media_modelos_canciones_new (void) {
	return graph_media_modelos_canciones_construct (GRAPH_MEDIA_MODELOS_TYPE_CANCIONES);
}


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


GraphMediaModelosCanciones* graph_media_modelos_canciones_get_instancia (void) {
	GraphMediaModelosCanciones* result = NULL;
	GraphMediaModelosCanciones* _tmp0_ = NULL;
	GraphMediaModelosCanciones* _tmp2_ = NULL;
	GraphMediaModelosCanciones* _tmp3_ = NULL;
	_tmp0_ = graph_media_modelos_canciones_instancia;
	if (_tmp0_ == NULL) {
		GraphMediaModelosCanciones* _tmp1_ = NULL;
		_tmp1_ = graph_media_modelos_canciones_new ();
		_g_object_unref0 (graph_media_modelos_canciones_instancia);
		graph_media_modelos_canciones_instancia = _tmp1_;
	}
	_tmp2_ = graph_media_modelos_canciones_instancia;
	_tmp3_ = _g_object_ref0 (_tmp2_);
	result = _tmp3_;
	return result;
}


GraphMediaModelosCancion* graph_media_modelos_canciones_agregar (GraphMediaModelosCanciones* self, GraphMediaModelosCancion* cancion) {
	GraphMediaModelosCancion* result = NULL;
	GraphMediaModelosCancion* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	GraphMediaModelosTablaArchivo* _tmp2_ = NULL;
	GraphMediaModelosCancion* _tmp3_ = NULL;
	GraphMediaModelosArchivo* _tmp4_ = NULL;
	GraphMediaModelosCancion* _tmp5_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	g_return_val_if_fail (cancion != NULL, NULL);
	_tmp0_ = cancion;
	_tmp1_ = ((GraphMediaModelosArchivo*) _tmp0_)->tipo;
	_vala_assert (g_strcmp0 (_tmp1_, "audio") == 0, "cancion.tipo == \"audio\"");
	_tmp2_ = self->priv->archivos;
	_tmp3_ = cancion;
	_tmp4_ = graph_media_modelos_tabla_archivo_agregar (_tmp2_, (GraphMediaModelosArchivo*) _tmp3_);
	_tmp5_ = G_TYPE_CHECK_INSTANCE_TYPE (_tmp4_, GRAPH_MEDIA_MODELOS_TYPE_CANCION) ? ((GraphMediaModelosCancion*) _tmp4_) : NULL;
	if (_tmp5_ == NULL) {
		_graph_media_modelos_archivo_unref0 (_tmp4_);
	}
	result = _tmp5_;
	return result;
}


static gpointer _graph_media_modelos_archivo_ref0 (gpointer self) {
	return self ? graph_media_modelos_archivo_ref (self) : NULL;
}


GraphMediaModelosCancion* graph_media_modelos_canciones_eliminar (GraphMediaModelosCanciones* self, GraphMediaModelosCancion* cancion) {
	GraphMediaModelosCancion* result = NULL;
	GraphMediaModelosTablaArchivo* _tmp0_ = NULL;
	GraphMediaModelosCancion* _tmp1_ = NULL;
	GraphMediaModelosArchivo* _tmp2_ = NULL;
	GraphMediaModelosArchivo* _tmp3_ = NULL;
	GraphMediaModelosCancion* _tmp4_ = NULL;
	GraphMediaModelosCancion* _tmp5_ = NULL;
	GraphMediaModelosCancion* _tmp6_ = NULL;
	GError * _inner_error_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	g_return_val_if_fail (cancion != NULL, NULL);
	_tmp0_ = self->priv->archivos;
	_tmp1_ = cancion;
	_tmp2_ = graph_media_modelos_tabla_archivo_eliminar (_tmp0_, (GraphMediaModelosArchivo*) _tmp1_, &_inner_error_);
	_tmp3_ = _tmp2_;
	_graph_media_modelos_archivo_unref0 (_tmp3_);
	if (G_UNLIKELY (_inner_error_ != NULL)) {
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
		g_clear_error (&_inner_error_);
		return NULL;
	}
	_tmp4_ = cancion;
	((GraphMediaModelosArchivo*) _tmp4_)->id = (gint64) (-1);
	_tmp5_ = cancion;
	_tmp6_ = _graph_media_modelos_archivo_ref0 (_tmp5_);
	result = _tmp6_;
	return result;
}


gboolean graph_media_modelos_canciones_editar (GraphMediaModelosCanciones* self, GraphMediaModelosCancion* cancion) {
	gboolean result = FALSE;
	GraphMediaModelosTablaArchivo* _tmp0_ = NULL;
	GraphMediaModelosCancion* _tmp1_ = NULL;
	gboolean _tmp2_ = FALSE;
	g_return_val_if_fail (self != NULL, FALSE);
	g_return_val_if_fail (cancion != NULL, FALSE);
	_tmp0_ = self->priv->archivos;
	_tmp1_ = cancion;
	_tmp2_ = graph_media_modelos_tabla_archivo_editar (_tmp0_, (GraphMediaModelosArchivo*) _tmp1_);
	result = _tmp2_;
	return result;
}


gint graph_media_modelos_canciones_get_total_canciones (GraphMediaModelosCanciones* self) {
	gint result = 0;
	gint _tmp0_ = 0;
	g_return_val_if_fail (self != NULL, 0);
	_tmp0_ = graph_media_modelos_tabla_archivo_get_total_tipo ((GraphMediaModelosTablaArchivo*) self, "audio");
	result = _tmp0_;
	return result;
}


static GeeArrayList* graph_media_modelos_canciones_get_canciones (GraphMediaModelosCanciones* self, const gchar* where, gint lim) {
	GeeArrayList* result = NULL;
	GeeArrayList* canciones = NULL;
	GeeArrayList* _tmp0_ = NULL;
	GeeArrayList* archivos = NULL;
	const gchar* _tmp1_ = NULL;
	gint _tmp2_ = 0;
	GeeArrayList* _tmp3_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	g_return_val_if_fail (where != NULL, NULL);
	_tmp0_ = gee_array_list_new (GRAPH_MEDIA_MODELOS_TYPE_CANCION, (GBoxedCopyFunc) graph_media_modelos_archivo_ref, graph_media_modelos_archivo_unref, NULL, NULL, NULL);
	canciones = _tmp0_;
	_tmp1_ = where;
	_tmp2_ = lim;
	_tmp3_ = graph_media_modelos_tabla_archivo_get_archivos ((GraphMediaModelosTablaArchivo*) self, _tmp1_, _tmp2_, "popularidad");
	archivos = _tmp3_;
	{
		GeeArrayList* _p_list = NULL;
		GeeArrayList* _tmp4_ = NULL;
		GeeArrayList* _tmp5_ = NULL;
		gint _p_size = 0;
		GeeArrayList* _tmp6_ = NULL;
		gint _tmp7_ = 0;
		gint _tmp8_ = 0;
		gint _p_index = 0;
		_tmp4_ = archivos;
		_tmp5_ = _g_object_ref0 (_tmp4_);
		_p_list = _tmp5_;
		_tmp6_ = _p_list;
		_tmp7_ = gee_abstract_collection_get_size ((GeeCollection*) _tmp6_);
		_tmp8_ = _tmp7_;
		_p_size = _tmp8_;
		_p_index = -1;
		while (TRUE) {
			gint _tmp9_ = 0;
			gint _tmp10_ = 0;
			gint _tmp11_ = 0;
			GraphMediaModelosArchivo* p = NULL;
			GeeArrayList* _tmp12_ = NULL;
			gint _tmp13_ = 0;
			gpointer _tmp14_ = NULL;
			GraphMediaModelosCancion* a = NULL;
			GraphMediaModelosArchivo* _tmp15_ = NULL;
			GraphMediaModelosCancion* _tmp16_ = NULL;
			GeeArrayList* _tmp17_ = NULL;
			GraphMediaModelosCancion* _tmp18_ = NULL;
			_tmp9_ = _p_index;
			_p_index = _tmp9_ + 1;
			_tmp10_ = _p_index;
			_tmp11_ = _p_size;
			if (!(_tmp10_ < _tmp11_)) {
				break;
			}
			_tmp12_ = _p_list;
			_tmp13_ = _p_index;
			_tmp14_ = gee_abstract_list_get ((GeeAbstractList*) _tmp12_, _tmp13_);
			p = (GraphMediaModelosArchivo*) _tmp14_;
			_tmp15_ = p;
			_tmp16_ = graph_media_modelos_archivo_cast_cancion (_tmp15_);
			a = _tmp16_;
			_tmp17_ = canciones;
			_tmp18_ = a;
			gee_abstract_collection_add ((GeeAbstractCollection*) _tmp17_, _tmp18_);
			_graph_media_modelos_archivo_unref0 (a);
			_graph_media_modelos_archivo_unref0 (p);
		}
		_g_object_unref0 (_p_list);
	}
	result = canciones;
	_g_object_unref0 (archivos);
	return result;
}


GraphMediaModelosCancion* graph_media_modelos_canciones_get_cancion_por_id (GraphMediaModelosCanciones* self, gint64 id) {
	GraphMediaModelosCancion* result = NULL;
	GraphMediaModelosArchivo* archivo = NULL;
	gint64 _tmp0_ = 0LL;
	GraphMediaModelosArchivo* _tmp1_ = NULL;
	GraphMediaModelosCancion* _tmp2_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = id;
	_tmp1_ = graph_media_modelos_tabla_archivo_get_archivo_id ((GraphMediaModelosTablaArchivo*) self, _tmp0_);
	archivo = _tmp1_;
	_vala_assert (archivo != NULL, "archivo != null");
	_tmp2_ = graph_media_modelos_archivo_cast_cancion (archivo);
	result = _tmp2_;
	_graph_media_modelos_archivo_unref0 (archivo);
	return result;
}


GeeArrayList* graph_media_modelos_canciones_buscar_canciones_por_nombre (GraphMediaModelosCanciones* self, const gchar* nombre, gint limite, const gchar* orden) {
	GeeArrayList* result = NULL;
	gint _tmp0_ = 0;
	sqlite3_stmt* query = NULL;
	gchar* sql = NULL;
	const gchar* _tmp1_ = NULL;
	const gchar* _tmp2_ = NULL;
	gchar* _tmp3_ = NULL;
	gchar* _tmp4_ = NULL;
	gchar* _tmp5_ = NULL;
	gchar* _tmp6_ = NULL;
	const gchar* _tmp7_ = NULL;
	gchar* _tmp8_ = NULL;
	gchar* _tmp9_ = NULL;
	gchar* _tmp10_ = NULL;
	gchar* _tmp11_ = NULL;
	gint res = 0;
	sqlite3* _tmp12_ = NULL;
	const gchar* _tmp13_ = NULL;
	sqlite3_stmt* _tmp14_ = NULL;
	gint _tmp15_ = 0;
	gint _tmp16_ = 0;
	sqlite3_stmt* _tmp17_ = NULL;
	gchar* _tmp18_ = NULL;
	GDestroyNotify _tmp19_ = NULL;
	gint _tmp20_ = 0;
	gint _tmp21_ = 0;
	GeeArrayList* archivos = NULL;
	GeeArrayList* _tmp22_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	g_return_val_if_fail (nombre != NULL, NULL);
	g_return_val_if_fail (orden != NULL, NULL);
	_tmp0_ = limite;
	_vala_assert (_tmp0_ >= 0, "limite >= 0");
	_tmp1_ = ((GraphMediaModelosTablas*) self)->nombre_tabla;
	_tmp2_ = nombre;
	_tmp3_ = g_strconcat ("LIKE '%", _tmp2_, NULL);
	_tmp4_ = _tmp3_;
	_tmp5_ = g_strconcat (_tmp4_, "%'", NULL);
	_tmp6_ = _tmp5_;
	_tmp7_ = orden;
	_tmp8_ = g_strdup_printf (" FROM %s WHERE tipo=? AND nombre %s ORDER BY %s DESC", _tmp1_, _tmp6_, _tmp7_);
	_tmp9_ = _tmp8_;
	_tmp10_ = g_strconcat ("SELECT id, nombre, ubicacion, tipo, ultimoAcceso, popularidad, disponi" \
"ble", _tmp9_, NULL);
	_tmp11_ = _tmp10_;
	_g_free0 (_tmp9_);
	_g_free0 (_tmp6_);
	_g_free0 (_tmp4_);
	sql = _tmp11_;
	_tmp12_ = graph_media_modelos_tablas_bd;
	_tmp13_ = sql;
	_tmp15_ = sqlite3_prepare_v2 (_tmp12_, _tmp13_, -1, &_tmp14_, NULL);
	_sqlite3_finalize0 (query);
	query = _tmp14_;
	res = _tmp15_;
	_tmp16_ = res;
	_vala_assert (_tmp16_ == SQLITE_OK, "res == Sqlite.OK");
	_tmp17_ = query;
	_tmp18_ = g_strdup ("audio");
	_tmp19_ = g_free;
	_tmp20_ = sqlite3_bind_text (_tmp17_, 1, _tmp18_, -1, _tmp19_);
	res = _tmp20_;
	_tmp21_ = res;
	_vala_assert (_tmp21_ == SQLITE_OK, "res == Sqlite.OK");
	_tmp22_ = gee_array_list_new (GRAPH_MEDIA_MODELOS_TYPE_CANCION, (GBoxedCopyFunc) graph_media_modelos_archivo_ref, graph_media_modelos_archivo_unref, NULL, NULL, NULL);
	archivos = _tmp22_;
	while (TRUE) {
		sqlite3_stmt* _tmp23_ = NULL;
		gint _tmp24_ = 0;
		gint _tmp25_ = 0;
		gboolean _tmp26_ = FALSE;
		gint _tmp27_ = 0;
		GraphMediaModelosCancion* celda = NULL;
		GraphMediaModelosCancion* _tmp32_ = NULL;
		GraphMediaModelosCancion* _tmp33_ = NULL;
		sqlite3_stmt* _tmp34_ = NULL;
		gint64 _tmp35_ = 0LL;
		GraphMediaModelosCancion* _tmp36_ = NULL;
		sqlite3_stmt* _tmp37_ = NULL;
		const gchar* _tmp38_ = NULL;
		gchar* _tmp39_ = NULL;
		GraphMediaModelosCancion* _tmp40_ = NULL;
		sqlite3_stmt* _tmp41_ = NULL;
		const gchar* _tmp42_ = NULL;
		gchar* _tmp43_ = NULL;
		GraphMediaModelosCancion* _tmp44_ = NULL;
		sqlite3_stmt* _tmp45_ = NULL;
		const gchar* _tmp46_ = NULL;
		gchar* _tmp47_ = NULL;
		GraphMediaModelosCancion* _tmp48_ = NULL;
		sqlite3_stmt* _tmp49_ = NULL;
		gdouble _tmp50_ = 0.0;
		GraphMediaModelosCancion* _tmp51_ = NULL;
		sqlite3_stmt* _tmp52_ = NULL;
		gint _tmp53_ = 0;
		GeeArrayList* _tmp54_ = NULL;
		GraphMediaModelosCancion* _tmp55_ = NULL;
		_tmp23_ = query;
		_tmp24_ = sqlite3_step (_tmp23_);
		res = _tmp24_;
		_tmp25_ = res;
		if (!(_tmp25_ == SQLITE_ROW)) {
			break;
		}
		_tmp27_ = limite;
		if (_tmp27_ != 0) {
			GeeArrayList* _tmp28_ = NULL;
			gint _tmp29_ = 0;
			gint _tmp30_ = 0;
			gint _tmp31_ = 0;
			_tmp28_ = archivos;
			_tmp29_ = gee_abstract_collection_get_size ((GeeCollection*) _tmp28_);
			_tmp30_ = _tmp29_;
			_tmp31_ = limite;
			_tmp26_ = _tmp30_ == _tmp31_;
		} else {
			_tmp26_ = FALSE;
		}
		if (_tmp26_) {
			break;
		}
		_tmp32_ = graph_media_modelos_cancion_new ();
		celda = _tmp32_;
		_tmp33_ = celda;
		_tmp34_ = query;
		_tmp35_ = sqlite3_column_int64 (_tmp34_, 0);
		((GraphMediaModelosArchivo*) _tmp33_)->id = _tmp35_;
		_tmp36_ = celda;
		_tmp37_ = query;
		_tmp38_ = sqlite3_column_text (_tmp37_, 1);
		_tmp39_ = g_strdup (_tmp38_);
		_g_free0 (((GraphMediaModelosArchivo*) _tmp36_)->nombre);
		((GraphMediaModelosArchivo*) _tmp36_)->nombre = _tmp39_;
		_tmp40_ = celda;
		_tmp41_ = query;
		_tmp42_ = sqlite3_column_text (_tmp41_, 2);
		_tmp43_ = g_strdup (_tmp42_);
		_g_free0 (((GraphMediaModelosArchivo*) _tmp40_)->ubicacion);
		((GraphMediaModelosArchivo*) _tmp40_)->ubicacion = _tmp43_;
		_tmp44_ = celda;
		_tmp45_ = query;
		_tmp46_ = sqlite3_column_text (_tmp45_, 3);
		_tmp47_ = g_strdup (_tmp46_);
		_g_free0 (((GraphMediaModelosArchivo*) _tmp44_)->tipo);
		((GraphMediaModelosArchivo*) _tmp44_)->tipo = _tmp47_;
		_tmp48_ = celda;
		_tmp49_ = query;
		_tmp50_ = sqlite3_column_double (_tmp49_, 4);
		((GraphMediaModelosArchivo*) _tmp48_)->popularidad = _tmp50_;
		_tmp51_ = celda;
		_tmp52_ = query;
		_tmp53_ = sqlite3_column_int (_tmp52_, 5);
		((GraphMediaModelosArchivo*) _tmp51_)->disponible = _tmp53_ == 0;
		_tmp54_ = archivos;
		_tmp55_ = celda;
		gee_abstract_collection_add ((GeeAbstractCollection*) _tmp54_, _tmp55_);
		_graph_media_modelos_archivo_unref0 (celda);
	}
	result = archivos;
	_g_free0 (sql);
	_sqlite3_finalize0 (query);
	return result;
}


static Block5Data* block5_data_ref (Block5Data* _data5_) {
	g_atomic_int_inc (&_data5_->_ref_count_);
	return _data5_;
}


static void block5_data_unref (void * _userdata_) {
	Block5Data* _data5_;
	_data5_ = (Block5Data*) _userdata_;
	if (g_atomic_int_dec_and_test (&_data5_->_ref_count_)) {
		GraphMediaModelosCanciones* self;
		self = _data5_->self;
		_g_object_unref0 (_data5_->vista);
		_g_object_unref0 (_data5_->model);
		_g_object_unref0 (self);
		g_slice_free (Block5Data, _data5_);
	}
}


static void _gtk_tree_path_free0_ (gpointer var) {
	(var == NULL) ? NULL : (var = (gtk_tree_path_free (var), NULL));
}


static void _g_list_free__gtk_tree_path_free0_ (GList* self) {
	g_list_foreach (self, (GFunc) _gtk_tree_path_free0_, NULL);
	g_list_free (self);
}


static gpointer _gtk_tree_path_copy0 (gpointer self) {
	return self ? gtk_tree_path_copy (self) : NULL;
}


static void __lambda6_ (Block5Data* _data5_) {
	GraphMediaModelosCanciones* self;
	GList* paths = NULL;
	GtkIconView* _tmp0_ = NULL;
	GList* _tmp1_ = NULL;
	GList* _tmp2_ = NULL;
	GtkTreePath* path = NULL;
	GList* _tmp3_ = NULL;
	gconstpointer _tmp4_ = NULL;
	GtkTreePath* _tmp5_ = NULL;
	GValue title = {0};
	GValue icon = {0};
	GValue index = {0};
	gboolean tmp = FALSE;
	GtkListStore* _tmp6_ = NULL;
	GtkTreePath* _tmp7_ = NULL;
	GtkTreeIter _tmp8_ = {0};
	gboolean _tmp9_ = FALSE;
	gboolean _tmp10_ = FALSE;
	GtkListStore* _tmp11_ = NULL;
	GtkTreeIter _tmp12_ = {0};
	GValue _tmp13_ = {0};
	GtkListStore* _tmp14_ = NULL;
	GtkTreeIter _tmp15_ = {0};
	GValue _tmp16_ = {0};
	GtkListStore* _tmp17_ = NULL;
	GtkTreeIter _tmp18_ = {0};
	GValue _tmp19_ = {0};
	GValue _tmp20_ = {0};
	GValue _tmp21_ = {0};
	GValue _tmp22_ = {0};
	GValue _tmp23_ = {0};
	self = _data5_->self;
	_tmp0_ = _data5_->vista;
	_tmp1_ = gtk_icon_view_get_selected_items (_tmp0_);
	paths = _tmp1_;
	_tmp2_ = paths;
	if (_tmp2_ == NULL) {
		__g_list_free__gtk_tree_path_free0_0 (paths);
		return;
	}
	_tmp3_ = paths;
	_tmp4_ = g_list_nth_data (_tmp3_, (guint) 0);
	_tmp5_ = _gtk_tree_path_copy0 ((GtkTreePath*) _tmp4_);
	path = _tmp5_;
	_tmp6_ = _data5_->model;
	_tmp7_ = path;
	_tmp9_ = gtk_tree_model_get_iter ((GtkTreeModel*) _tmp6_, &_tmp8_, _tmp7_);
	_data5_->iter = _tmp8_;
	tmp = _tmp9_;
	_tmp10_ = tmp;
	_vala_assert (_tmp10_ == TRUE, "tmp == true");
	_tmp11_ = _data5_->model;
	_tmp12_ = _data5_->iter;
	gtk_tree_model_get_value ((GtkTreeModel*) _tmp11_, &_tmp12_, 0, &_tmp13_);
	G_IS_VALUE (&icon) ? (g_value_unset (&icon), NULL) : NULL;
	icon = _tmp13_;
	_tmp14_ = _data5_->model;
	_tmp15_ = _data5_->iter;
	gtk_tree_model_get_value ((GtkTreeModel*) _tmp14_, &_tmp15_, 1, &_tmp16_);
	G_IS_VALUE (&title) ? (g_value_unset (&title), NULL) : NULL;
	title = _tmp16_;
	_tmp17_ = _data5_->model;
	_tmp18_ = _data5_->iter;
	gtk_tree_model_get_value ((GtkTreeModel*) _tmp17_, &_tmp18_, 2, &_tmp19_);
	G_IS_VALUE (&index) ? (g_value_unset (&index), NULL) : NULL;
	index = _tmp19_;
	_tmp20_ = index;
	graph_media_modelos_app_gui_index_actual = g_value_get_int64 (&_tmp20_);
	_tmp21_ = title;
	_tmp22_ = icon;
	_tmp23_ = index;
	g_warning ("cancion.vala:152: %s: %p - %lld \n", g_value_get_string (&_tmp21_), g_value_get_object (&_tmp22_), g_value_get_int64 (&_tmp23_));
	G_IS_VALUE (&index) ? (g_value_unset (&index), NULL) : NULL;
	G_IS_VALUE (&icon) ? (g_value_unset (&icon), NULL) : NULL;
	G_IS_VALUE (&title) ? (g_value_unset (&title), NULL) : NULL;
	_gtk_tree_path_free0 (path);
	__g_list_free__gtk_tree_path_free0_0 (paths);
}


static void ___lambda6__gtk_icon_view_selection_changed (GtkIconView* _sender, gpointer self) {
	__lambda6_ (self);
}


static GtkIconView* graph_media_modelos_canciones_real_filtrar (GraphMediaModelosFiltrable* base, const gchar* consulta, gint lim) {
	GraphMediaModelosCanciones * self;
	GtkIconView* result = NULL;
	Block5Data* _data5_;
	GeeArrayList* canciones = NULL;
	const gchar* _tmp0_ = NULL;
	gint _tmp1_ = 0;
	GeeArrayList* _tmp2_ = NULL;
	GtkListStore* _tmp3_ = NULL;
	GtkListStore* _tmp4_ = NULL;
	GtkIconView* _tmp5_ = NULL;
	GtkIconView* _tmp6_ = NULL;
	GtkIconView* _tmp7_ = NULL;
	GtkIconView* _tmp8_ = NULL;
	GtkIconView* _tmp32_ = NULL;
	GtkIconView* _tmp33_ = NULL;
	GtkIconView* _tmp34_ = NULL;
	self = (GraphMediaModelosCanciones*) base;
	g_return_val_if_fail (consulta != NULL, NULL);
	_data5_ = g_slice_new0 (Block5Data);
	_data5_->_ref_count_ = 1;
	_data5_->self = g_object_ref (self);
	_tmp0_ = consulta;
	_tmp1_ = lim;
	_tmp2_ = graph_media_modelos_canciones_buscar_canciones_por_nombre (self, _tmp0_, _tmp1_, "popularidad");
	canciones = _tmp2_;
	_tmp3_ = gtk_list_store_new (3, GDK_TYPE_PIXBUF, G_TYPE_STRING, G_TYPE_INT64, -1);
	_data5_->model = _tmp3_;
	_tmp4_ = _data5_->model;
	_tmp5_ = (GtkIconView*) gtk_icon_view_new_with_model ((GtkTreeModel*) _tmp4_);
	g_object_ref_sink (_tmp5_);
	_data5_->vista = _tmp5_;
	_tmp6_ = _data5_->vista;
	gtk_icon_view_set_pixbuf_column (_tmp6_, 0);
	_tmp7_ = _data5_->vista;
	gtk_icon_view_set_text_column (_tmp7_, 1);
	_tmp8_ = _data5_->vista;
	gtk_icon_view_set_item_width (_tmp8_, 120);
	memset (&_data5_->iter, 0, sizeof (GtkTreeIter));
	{
		GeeArrayList* _a_list = NULL;
		GeeArrayList* _tmp9_ = NULL;
		GeeArrayList* _tmp10_ = NULL;
		gint _a_size = 0;
		GeeArrayList* _tmp11_ = NULL;
		gint _tmp12_ = 0;
		gint _tmp13_ = 0;
		gint _a_index = 0;
		_tmp9_ = canciones;
		_tmp10_ = _g_object_ref0 (_tmp9_);
		_a_list = _tmp10_;
		_tmp11_ = _a_list;
		_tmp12_ = gee_abstract_collection_get_size ((GeeCollection*) _tmp11_);
		_tmp13_ = _tmp12_;
		_a_size = _tmp13_;
		_a_index = -1;
		while (TRUE) {
			gint _tmp14_ = 0;
			gint _tmp15_ = 0;
			gint _tmp16_ = 0;
			GraphMediaModelosCancion* a = NULL;
			GeeArrayList* _tmp17_ = NULL;
			gint _tmp18_ = 0;
			gpointer _tmp19_ = NULL;
			GtkListStore* _tmp20_ = NULL;
			GtkTreeIter _tmp21_ = {0};
			GtkListStore* _tmp22_ = NULL;
			GtkTreeIter _tmp23_ = {0};
			GraphMediaModelosCancion* _tmp24_ = NULL;
			const gchar* _tmp25_ = NULL;
			GdkPixbuf* _tmp26_ = NULL;
			GdkPixbuf* _tmp27_ = NULL;
			GraphMediaModelosCancion* _tmp28_ = NULL;
			const gchar* _tmp29_ = NULL;
			GraphMediaModelosCancion* _tmp30_ = NULL;
			gint64 _tmp31_ = 0LL;
			_tmp14_ = _a_index;
			_a_index = _tmp14_ + 1;
			_tmp15_ = _a_index;
			_tmp16_ = _a_size;
			if (!(_tmp15_ < _tmp16_)) {
				break;
			}
			_tmp17_ = _a_list;
			_tmp18_ = _a_index;
			_tmp19_ = gee_abstract_list_get ((GeeAbstractList*) _tmp17_, _tmp18_);
			a = (GraphMediaModelosCancion*) _tmp19_;
			_tmp20_ = _data5_->model;
			gtk_list_store_append (_tmp20_, &_tmp21_);
			_data5_->iter = _tmp21_;
			_tmp22_ = _data5_->model;
			_tmp23_ = _data5_->iter;
			_tmp24_ = a;
			_tmp25_ = _tmp24_->imagen;
			_tmp26_ = graph_media_modelos_filtrable_cargar_icono_ubicacion ((GraphMediaModelosFiltrable*) self, _tmp25_, 50, 50);
			_tmp27_ = _tmp26_;
			_tmp28_ = a;
			_tmp29_ = ((GraphMediaModelosArchivo*) _tmp28_)->nombre;
			_tmp30_ = a;
			_tmp31_ = ((GraphMediaModelosArchivo*) _tmp30_)->id;
			gtk_list_store_set (_tmp22_, &_tmp23_, 0, _tmp27_, 1, _tmp29_, 2, _tmp31_, -1);
			_g_object_unref0 (_tmp27_);
			_graph_media_modelos_archivo_unref0 (a);
		}
		_g_object_unref0 (_a_list);
	}
	_tmp32_ = _data5_->vista;
	g_signal_connect_data (_tmp32_, "selection-changed", (GCallback) ___lambda6__gtk_icon_view_selection_changed, block5_data_ref (_data5_), (GClosureNotify) block5_data_unref, 0);
	_tmp33_ = _data5_->vista;
	_tmp34_ = _g_object_ref0 (_tmp33_);
	result = _tmp34_;
	_g_object_unref0 (canciones);
	block5_data_unref (_data5_);
	_data5_ = NULL;
	return result;
}


static void graph_media_modelos_canciones_class_init (GraphMediaModelosCancionesClass * klass) {
	graph_media_modelos_canciones_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (GraphMediaModelosCancionesPrivate));
	G_OBJECT_CLASS (klass)->finalize = graph_media_modelos_canciones_finalize;
}


static void graph_media_modelos_canciones_graph_media_modelos_filtrable_interface_init (GraphMediaModelosFiltrableIface * iface) {
	graph_media_modelos_canciones_graph_media_modelos_filtrable_parent_iface = g_type_interface_peek_parent (iface);
	iface->filtrar = (GtkIconView* (*)(GraphMediaModelosFiltrable*, const gchar*, gint)) graph_media_modelos_canciones_real_filtrar;
}


static void graph_media_modelos_canciones_instance_init (GraphMediaModelosCanciones * self) {
	self->priv = GRAPH_MEDIA_MODELOS_CANCIONES_GET_PRIVATE (self);
}


static void graph_media_modelos_canciones_finalize (GObject* obj) {
	GraphMediaModelosCanciones * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, GRAPH_MEDIA_MODELOS_TYPE_CANCIONES, GraphMediaModelosCanciones);
	_g_object_unref0 (self->priv->archivos);
	G_OBJECT_CLASS (graph_media_modelos_canciones_parent_class)->finalize (obj);
}


GType graph_media_modelos_canciones_get_type (void) {
	static volatile gsize graph_media_modelos_canciones_type_id__volatile = 0;
	if (g_once_init_enter (&graph_media_modelos_canciones_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (GraphMediaModelosCancionesClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) graph_media_modelos_canciones_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (GraphMediaModelosCanciones), 0, (GInstanceInitFunc) graph_media_modelos_canciones_instance_init, NULL };
		static const GInterfaceInfo graph_media_modelos_filtrable_info = { (GInterfaceInitFunc) graph_media_modelos_canciones_graph_media_modelos_filtrable_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
		GType graph_media_modelos_canciones_type_id;
		graph_media_modelos_canciones_type_id = g_type_register_static (GRAPH_MEDIA_MODELOS_TYPE_TABLA_ARCHIVO, "GraphMediaModelosCanciones", &g_define_type_info, 0);
		g_type_add_interface_static (graph_media_modelos_canciones_type_id, GRAPH_MEDIA_MODELOS_TYPE_FILTRABLE, &graph_media_modelos_filtrable_info);
		g_once_init_leave (&graph_media_modelos_canciones_type_id__volatile, graph_media_modelos_canciones_type_id);
	}
	return graph_media_modelos_canciones_type_id__volatile;
}



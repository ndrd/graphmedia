/* tablas.c generated by valac 0.26.0, the Vala compiler
 * generated from tablas.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include <sqlite3.h>
#include <glib/gstdio.h>
#include <stdio.h>


#define GRAPH_MEDIA_MODELOS_TYPE_TABLAS (graph_media_modelos_tablas_get_type ())
#define GRAPH_MEDIA_MODELOS_TABLAS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GRAPH_MEDIA_MODELOS_TYPE_TABLAS, GraphMediaModelosTablas))
#define GRAPH_MEDIA_MODELOS_TABLAS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GRAPH_MEDIA_MODELOS_TYPE_TABLAS, GraphMediaModelosTablasClass))
#define GRAPH_MEDIA_MODELOS_IS_TABLAS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GRAPH_MEDIA_MODELOS_TYPE_TABLAS))
#define GRAPH_MEDIA_MODELOS_IS_TABLAS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GRAPH_MEDIA_MODELOS_TYPE_TABLAS))
#define GRAPH_MEDIA_MODELOS_TABLAS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GRAPH_MEDIA_MODELOS_TYPE_TABLAS, GraphMediaModelosTablasClass))

typedef struct _GraphMediaModelosTablas GraphMediaModelosTablas;
typedef struct _GraphMediaModelosTablasClass GraphMediaModelosTablasClass;
typedef struct _GraphMediaModelosTablasPrivate GraphMediaModelosTablasPrivate;
#define _g_free0(var) (var = (g_free (var), NULL))
#define _sqlite3_close0(var) ((var == NULL) ? NULL : (var = (sqlite3_close (var), NULL)))
#define _sqlite3_finalize0(var) ((var == NULL) ? NULL : (var = (sqlite3_finalize (var), NULL)))

#define GRAPH_MEDIA_MODELOS_TYPE_RELACION (graph_media_modelos_relacion_get_type ())
#define GRAPH_MEDIA_MODELOS_RELACION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GRAPH_MEDIA_MODELOS_TYPE_RELACION, GraphMediaModelosRelacion))
#define GRAPH_MEDIA_MODELOS_RELACION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GRAPH_MEDIA_MODELOS_TYPE_RELACION, GraphMediaModelosRelacionClass))
#define GRAPH_MEDIA_MODELOS_IS_RELACION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GRAPH_MEDIA_MODELOS_TYPE_RELACION))
#define GRAPH_MEDIA_MODELOS_IS_RELACION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GRAPH_MEDIA_MODELOS_TYPE_RELACION))
#define GRAPH_MEDIA_MODELOS_RELACION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GRAPH_MEDIA_MODELOS_TYPE_RELACION, GraphMediaModelosRelacionClass))

typedef struct _GraphMediaModelosRelacion GraphMediaModelosRelacion;
typedef struct _GraphMediaModelosRelacionClass GraphMediaModelosRelacionClass;
typedef struct _GraphMediaModelosRelacionPrivate GraphMediaModelosRelacionPrivate;
#define _vala_assert(expr, msg) if G_LIKELY (expr) ; else g_assertion_message_expr (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, msg);

typedef enum  {
	GRAPH_MEDIA_MODELOS_ERROR_BASE_DATOS_ARCHIVO_NO_ENCONTRADO,
	GRAPH_MEDIA_MODELOS_ERROR_BASE_DATOS_ARCHIVO_INVALIDO,
	GRAPH_MEDIA_MODELOS_ERROR_BASE_DATOS_CONSULTA
} GraphMediaModelosErrorBaseDatos;
#define GRAPH_MEDIA_MODELOS_ERROR_BASE_DATOS graph_media_modelos_error_base_datos_quark ()
struct _GraphMediaModelosTablas {
	GObject parent_instance;
	GraphMediaModelosTablasPrivate * priv;
	gchar* nombre_tabla;
};

struct _GraphMediaModelosTablasClass {
	GObjectClass parent_class;
};

struct _GraphMediaModelosRelacion {
	GraphMediaModelosTablas parent_instance;
	GraphMediaModelosRelacionPrivate * priv;
	gchar* llave;
	gchar* puerta;
	gchar* tabla_llave;
	gchar* tabla_puerta;
};

struct _GraphMediaModelosRelacionClass {
	GraphMediaModelosTablasClass parent_class;
};


static gpointer graph_media_modelos_tablas_parent_class = NULL;
extern sqlite3* graph_media_modelos_tablas_bd;
sqlite3* graph_media_modelos_tablas_bd = NULL;
static gpointer graph_media_modelos_relacion_parent_class = NULL;

GQuark graph_media_modelos_error_base_datos_quark (void);
GType graph_media_modelos_tablas_get_type (void) G_GNUC_CONST;
enum  {
	GRAPH_MEDIA_MODELOS_TABLAS_DUMMY_PROPERTY
};
static void graph_media_modelos_tablas_abrir_base_datos (const gchar* nombre_archivo, GError** error);
void graph_media_modelos_tablas_inicializar (const gchar* archivo);
gboolean graph_media_modelos_tablas_existe_id (GraphMediaModelosTablas* self, gint64 id);
gboolean graph_media_modelos_tablas_actualizar_celda_por_id (GraphMediaModelosTablas* self, gint64 id, const gchar* columnas);
gboolean graph_media_modelos_tablas_eliminar_celda_por_id (GraphMediaModelosTablas* self, gint64 id);
gint graph_media_modelos_tablas_get_total_celdas (GraphMediaModelosTablas* self, const gchar* columna);
gboolean graph_media_modelos_tablas_insertar_celda (GraphMediaModelosTablas* self, const gchar* columnas, const gchar* valores, sqlite3_stmt** query);
gboolean graph_media_modelos_tablas_buscar_celdas (GraphMediaModelosTablas* self, const gchar* colunmnas, const gchar* condiciones, sqlite3_stmt** query);
void graph_media_modelos_tablas_set_nombre_tabla (GraphMediaModelosTablas* self, const gchar* nombre_tabla);
GraphMediaModelosTablas* graph_media_modelos_tablas_construct (GType object_type);
static void graph_media_modelos_tablas_finalize (GObject* obj);
GType graph_media_modelos_relacion_get_type (void) G_GNUC_CONST;
enum  {
	GRAPH_MEDIA_MODELOS_RELACION_DUMMY_PROPERTY
};
static gboolean graph_media_modelos_relacion_existe_relacion (GraphMediaModelosRelacion* self, gint64 id1, gint64 id2);
void graph_media_modelos_relacion_set_tabla_puerta (GraphMediaModelosRelacion* self, const gchar* columna);
void graph_media_modelos_relacion_set_tabla_llave (GraphMediaModelosRelacion* self, const gchar* columna);
void graph_media_modelos_relacion_set_llave (GraphMediaModelosRelacion* self, const gchar* columna);
void graph_media_modelos_relacion_set_puerta (GraphMediaModelosRelacion* self, const gchar* columna);
gboolean graph_media_modelos_relacion_relaciona_ids (GraphMediaModelosRelacion* self, gint64 id1, gint64 id2);
void graph_media_modelos_relacion_eliminar_relaciones_id (GraphMediaModelosRelacion* self, gint64 id);
static gboolean graph_media_modelos_relacion_eliminar_celda_por_columna (GraphMediaModelosRelacion* self, gint64 id, const gchar* columna);
void graph_media_modelos_relacion_eliminar_relaciones_secundarias_id (GraphMediaModelosRelacion* self, gint64 id);
gboolean graph_media_modelos_relacion_eliminar_relacion (GraphMediaModelosRelacion* self, gint64 id_llave, gint64 id_puerta);
gint graph_media_modelos_relacion_total_relaciones_llave (GraphMediaModelosRelacion* self, gint64 id);
gint graph_media_modelos_relacion_total_relaciones_puerta (GraphMediaModelosRelacion* self, gint64 id);
GraphMediaModelosRelacion* graph_media_modelos_relacion_construct (GType object_type);
static void graph_media_modelos_relacion_finalize (GObject* obj);


GQuark graph_media_modelos_error_base_datos_quark (void) {
	return g_quark_from_static_string ("graph_media_modelos_error_base_datos-quark");
}


static void graph_media_modelos_tablas_abrir_base_datos (const gchar* nombre_archivo, GError** error) {
	gint celdas = 0;
	const gchar* _tmp0_ = NULL;
	gboolean _tmp1_ = FALSE;
	const gchar* _tmp3_ = NULL;
	sqlite3* _tmp4_ = NULL;
	gint _tmp5_ = 0;
	gint _tmp6_ = 0;
	GError * _inner_error_ = NULL;
	g_return_if_fail (nombre_archivo != NULL);
	celdas = 0;
	_tmp0_ = nombre_archivo;
	_tmp1_ = g_file_test (_tmp0_, G_FILE_TEST_IS_REGULAR);
	if (!_tmp1_) {
		GError* _tmp2_ = NULL;
		_tmp2_ = g_error_new_literal (GRAPH_MEDIA_MODELOS_ERROR_BASE_DATOS, GRAPH_MEDIA_MODELOS_ERROR_BASE_DATOS_ARCHIVO_NO_ENCONTRADO, "No se encontro el arhivo");
		_inner_error_ = _tmp2_;
		if (_inner_error_->domain == GRAPH_MEDIA_MODELOS_ERROR_BASE_DATOS) {
			g_propagate_error (error, _inner_error_);
			return;
		} else {
			g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
			g_clear_error (&_inner_error_);
			return;
		}
	}
	_tmp3_ = nombre_archivo;
	_tmp5_ = sqlite3_open (_tmp3_, &_tmp4_);
	_sqlite3_close0 (graph_media_modelos_tablas_bd);
	graph_media_modelos_tablas_bd = _tmp4_;
	celdas = _tmp5_;
	_tmp6_ = celdas;
	if (_tmp6_ != SQLITE_OK) {
		const gchar* _tmp7_ = NULL;
		gchar* _tmp8_ = NULL;
		gchar* _tmp9_ = NULL;
		gchar* _tmp10_ = NULL;
		gchar* _tmp11_ = NULL;
		GError* _tmp12_ = NULL;
		GError* _tmp13_ = NULL;
		_tmp7_ = nombre_archivo;
		_tmp8_ = g_strconcat ("El archivo ", _tmp7_, NULL);
		_tmp9_ = _tmp8_;
		_tmp10_ = g_strconcat (_tmp9_, " no es válido", NULL);
		_tmp11_ = _tmp10_;
		_tmp12_ = g_error_new_literal (GRAPH_MEDIA_MODELOS_ERROR_BASE_DATOS, GRAPH_MEDIA_MODELOS_ERROR_BASE_DATOS_ARCHIVO_INVALIDO, _tmp11_);
		_tmp13_ = _tmp12_;
		_g_free0 (_tmp11_);
		_g_free0 (_tmp9_);
		_inner_error_ = _tmp13_;
		if (_inner_error_->domain == GRAPH_MEDIA_MODELOS_ERROR_BASE_DATOS) {
			g_propagate_error (error, _inner_error_);
			return;
		} else {
			g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
			g_clear_error (&_inner_error_);
			return;
		}
	}
}


void graph_media_modelos_tablas_inicializar (const gchar* archivo) {
	const gchar* _tmp0_ = NULL;
	GError * _inner_error_ = NULL;
	g_return_if_fail (archivo != NULL);
	_tmp0_ = archivo;
	graph_media_modelos_tablas_abrir_base_datos (_tmp0_, &_inner_error_);
	if (G_UNLIKELY (_inner_error_ != NULL)) {
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
		g_clear_error (&_inner_error_);
		return;
	}
}


gboolean graph_media_modelos_tablas_existe_id (GraphMediaModelosTablas* self, gint64 id) {
	gboolean result = FALSE;
	sqlite3_stmt* query = NULL;
	gint res = 0;
	sqlite3* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	gchar* _tmp2_ = NULL;
	gchar* _tmp3_ = NULL;
	sqlite3_stmt* _tmp4_ = NULL;
	gint _tmp5_ = 0;
	gint _tmp6_ = 0;
	gint _tmp7_ = 0;
	gint64 _tmp8_ = 0LL;
	gint _tmp9_ = 0;
	gint _tmp10_ = 0;
	gint _tmp11_ = 0;
	gint _tmp12_ = 0;
	g_return_val_if_fail (self != NULL, FALSE);
	_tmp0_ = graph_media_modelos_tablas_bd;
	_tmp1_ = self->nombre_tabla;
	_tmp2_ = g_strdup_printf ("SELECT id FROM %s WHERE id=?", _tmp1_);
	_tmp3_ = _tmp2_;
	_tmp5_ = sqlite3_prepare_v2 (_tmp0_, _tmp3_, -1, &_tmp4_, NULL);
	_sqlite3_finalize0 (query);
	query = _tmp4_;
	_tmp6_ = _tmp5_;
	_g_free0 (_tmp3_);
	res = _tmp6_;
	_tmp7_ = res;
	_vala_assert (_tmp7_ == SQLITE_OK, "res == Sqlite.OK");
	_tmp8_ = id;
	_tmp9_ = sqlite3_bind_int64 (query, 1, _tmp8_);
	res = _tmp9_;
	_tmp10_ = res;
	_vala_assert (_tmp10_ == SQLITE_OK, "res == Sqlite.OK");
	_tmp11_ = sqlite3_step (query);
	res = _tmp11_;
	_tmp12_ = res;
	result = _tmp12_ == SQLITE_ROW;
	_sqlite3_finalize0 (query);
	return result;
}


gboolean graph_media_modelos_tablas_actualizar_celda_por_id (GraphMediaModelosTablas* self, gint64 id, const gchar* columnas) {
	gboolean result = FALSE;
	sqlite3_stmt* query = NULL;
	gchar* sql = NULL;
	const gchar* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	gchar* _tmp2_ = NULL;
	FILE* _tmp3_ = NULL;
	gint res = 0;
	sqlite3* _tmp4_ = NULL;
	sqlite3_stmt* _tmp5_ = NULL;
	gint _tmp6_ = 0;
	gint _tmp7_ = 0;
	gint64 _tmp8_ = 0LL;
	gint _tmp9_ = 0;
	gint _tmp10_ = 0;
	gint _tmp11_ = 0;
	gint _tmp12_ = 0;
	g_return_val_if_fail (self != NULL, FALSE);
	g_return_val_if_fail (columnas != NULL, FALSE);
	_tmp0_ = self->nombre_tabla;
	_tmp1_ = columnas;
	_tmp2_ = g_strdup_printf ("UPDATE %s SET %s WHERE id=?", _tmp0_, _tmp1_);
	sql = _tmp2_;
	_tmp3_ = stdout;
	fprintf (_tmp3_, "%s", sql);
	_tmp4_ = graph_media_modelos_tablas_bd;
	_tmp6_ = sqlite3_prepare_v2 (_tmp4_, sql, -1, &_tmp5_, NULL);
	_sqlite3_finalize0 (query);
	query = _tmp5_;
	res = _tmp6_;
	_tmp7_ = res;
	_vala_assert (_tmp7_ == SQLITE_OK, "res == Sqlite.OK");
	_tmp8_ = id;
	_tmp9_ = sqlite3_bind_int64 (query, 2, _tmp8_);
	res = _tmp9_;
	_tmp10_ = res;
	_vala_assert (_tmp10_ == SQLITE_OK, "res == Sqlite.OK");
	_tmp11_ = sqlite3_step (query);
	res = _tmp11_;
	_tmp12_ = res;
	result = _tmp12_ == SQLITE_DONE;
	_g_free0 (sql);
	_sqlite3_finalize0 (query);
	return result;
}


gboolean graph_media_modelos_tablas_eliminar_celda_por_id (GraphMediaModelosTablas* self, gint64 id) {
	gboolean result = FALSE;
	sqlite3_stmt* query = NULL;
	gint res = 0;
	sqlite3* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	gchar* _tmp2_ = NULL;
	gchar* _tmp3_ = NULL;
	sqlite3_stmt* _tmp4_ = NULL;
	gint _tmp5_ = 0;
	gint _tmp6_ = 0;
	gint _tmp7_ = 0;
	gint64 _tmp8_ = 0LL;
	gint _tmp9_ = 0;
	gint _tmp10_ = 0;
	gint _tmp11_ = 0;
	gint _tmp12_ = 0;
	g_return_val_if_fail (self != NULL, FALSE);
	_tmp0_ = graph_media_modelos_tablas_bd;
	_tmp1_ = self->nombre_tabla;
	_tmp2_ = g_strdup_printf ("DELETE FROM %s WHERE id=? ", _tmp1_);
	_tmp3_ = _tmp2_;
	_tmp5_ = sqlite3_prepare_v2 (_tmp0_, _tmp3_, -1, &_tmp4_, NULL);
	_sqlite3_finalize0 (query);
	query = _tmp4_;
	_tmp6_ = _tmp5_;
	_g_free0 (_tmp3_);
	res = _tmp6_;
	_tmp7_ = res;
	_vala_assert (_tmp7_ == SQLITE_OK, "res == Sqlite.OK");
	_tmp8_ = id;
	_tmp9_ = sqlite3_bind_int64 (query, 1, _tmp8_);
	res = _tmp9_;
	_tmp10_ = res;
	_vala_assert (_tmp10_ == SQLITE_OK, "res == Sqlite.OK");
	_tmp11_ = sqlite3_step (query);
	res = _tmp11_;
	_tmp12_ = res;
	result = _tmp12_ == SQLITE_DONE;
	_sqlite3_finalize0 (query);
	return result;
}


gint graph_media_modelos_tablas_get_total_celdas (GraphMediaModelosTablas* self, const gchar* columna) {
	gint result = 0;
	sqlite3_stmt* query = NULL;
	gchar* sql = NULL;
	const gchar* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	gchar* _tmp2_ = NULL;
	gint res = 0;
	sqlite3* _tmp3_ = NULL;
	const gchar* _tmp4_ = NULL;
	sqlite3_stmt* _tmp5_ = NULL;
	gint _tmp6_ = 0;
	gint _tmp7_ = 0;
	sqlite3_stmt* _tmp8_ = NULL;
	gint _tmp9_ = 0;
	gint _tmp10_ = 0;
	sqlite3_stmt* _tmp11_ = NULL;
	gint _tmp12_ = 0;
	g_return_val_if_fail (self != NULL, 0);
	g_return_val_if_fail (columna != NULL, 0);
	_tmp0_ = self->nombre_tabla;
	_tmp1_ = columna;
	_tmp2_ = g_strdup_printf ("SELECT COUNT(id) AS total FROM %s WHERE %s", _tmp0_, _tmp1_);
	sql = _tmp2_;
	_tmp3_ = graph_media_modelos_tablas_bd;
	_tmp4_ = sql;
	_tmp6_ = sqlite3_prepare_v2 (_tmp3_, _tmp4_, -1, &_tmp5_, NULL);
	_sqlite3_finalize0 (query);
	query = _tmp5_;
	res = _tmp6_;
	_tmp7_ = res;
	_vala_assert (_tmp7_ == SQLITE_OK, "res == Sqlite.OK");
	_tmp8_ = query;
	_tmp9_ = sqlite3_step (_tmp8_);
	res = _tmp9_;
	_tmp10_ = res;
	if (_tmp10_ != SQLITE_ROW) {
		result = -1;
		_g_free0 (sql);
		_sqlite3_finalize0 (query);
		return result;
	}
	_tmp11_ = query;
	_tmp12_ = sqlite3_column_int (_tmp11_, 0);
	result = _tmp12_;
	_g_free0 (sql);
	_sqlite3_finalize0 (query);
	return result;
}


gboolean graph_media_modelos_tablas_insertar_celda (GraphMediaModelosTablas* self, const gchar* columnas, const gchar* valores, sqlite3_stmt** query) {
	sqlite3_stmt* _vala_query = NULL;
	gboolean result = FALSE;
	g_return_val_if_fail (self != NULL, FALSE);
	g_return_val_if_fail (columnas != NULL, FALSE);
	g_return_val_if_fail (valores != NULL, FALSE);
	result = FALSE;
	if (query) {
		*query = _vala_query;
	} else {
		_sqlite3_finalize0 (_vala_query);
	}
	return result;
}


gboolean graph_media_modelos_tablas_buscar_celdas (GraphMediaModelosTablas* self, const gchar* colunmnas, const gchar* condiciones, sqlite3_stmt** query) {
	sqlite3_stmt* _vala_query = NULL;
	gboolean result = FALSE;
	g_return_val_if_fail (self != NULL, FALSE);
	g_return_val_if_fail (colunmnas != NULL, FALSE);
	g_return_val_if_fail (condiciones != NULL, FALSE);
	result = FALSE;
	if (query) {
		*query = _vala_query;
	} else {
		_sqlite3_finalize0 (_vala_query);
	}
	return result;
}


void graph_media_modelos_tablas_set_nombre_tabla (GraphMediaModelosTablas* self, const gchar* nombre_tabla) {
	const gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	g_return_if_fail (self != NULL);
	g_return_if_fail (nombre_tabla != NULL);
	_tmp0_ = nombre_tabla;
	_tmp1_ = g_strdup (_tmp0_);
	_g_free0 (self->nombre_tabla);
	self->nombre_tabla = _tmp1_;
}


GraphMediaModelosTablas* graph_media_modelos_tablas_construct (GType object_type) {
	GraphMediaModelosTablas * self = NULL;
	self = (GraphMediaModelosTablas*) g_object_new (object_type, NULL);
	return self;
}


static void graph_media_modelos_tablas_class_init (GraphMediaModelosTablasClass * klass) {
	graph_media_modelos_tablas_parent_class = g_type_class_peek_parent (klass);
	G_OBJECT_CLASS (klass)->finalize = graph_media_modelos_tablas_finalize;
}


static void graph_media_modelos_tablas_instance_init (GraphMediaModelosTablas * self) {
}


static void graph_media_modelos_tablas_finalize (GObject* obj) {
	GraphMediaModelosTablas * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, GRAPH_MEDIA_MODELOS_TYPE_TABLAS, GraphMediaModelosTablas);
	_g_free0 (self->nombre_tabla);
	G_OBJECT_CLASS (graph_media_modelos_tablas_parent_class)->finalize (obj);
}


GType graph_media_modelos_tablas_get_type (void) {
	static volatile gsize graph_media_modelos_tablas_type_id__volatile = 0;
	if (g_once_init_enter (&graph_media_modelos_tablas_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (GraphMediaModelosTablasClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) graph_media_modelos_tablas_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (GraphMediaModelosTablas), 0, (GInstanceInitFunc) graph_media_modelos_tablas_instance_init, NULL };
		GType graph_media_modelos_tablas_type_id;
		graph_media_modelos_tablas_type_id = g_type_register_static (G_TYPE_OBJECT, "GraphMediaModelosTablas", &g_define_type_info, G_TYPE_FLAG_ABSTRACT);
		g_once_init_leave (&graph_media_modelos_tablas_type_id__volatile, graph_media_modelos_tablas_type_id);
	}
	return graph_media_modelos_tablas_type_id__volatile;
}


static gboolean graph_media_modelos_relacion_existe_relacion (GraphMediaModelosRelacion* self, gint64 id1, gint64 id2) {
	gboolean result = FALSE;
	sqlite3_stmt* query = NULL;
	gint res = 0;
	sqlite3* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	const gchar* _tmp2_ = NULL;
	const gchar* _tmp3_ = NULL;
	const gchar* _tmp4_ = NULL;
	const gchar* _tmp5_ = NULL;
	gchar* _tmp6_ = NULL;
	gchar* _tmp7_ = NULL;
	sqlite3_stmt* _tmp8_ = NULL;
	gint _tmp9_ = 0;
	gint _tmp10_ = 0;
	gint _tmp11_ = 0;
	gint64 _tmp12_ = 0LL;
	gint _tmp13_ = 0;
	gint _tmp14_ = 0;
	gint64 _tmp15_ = 0LL;
	gint _tmp16_ = 0;
	gint _tmp17_ = 0;
	gint _tmp18_ = 0;
	gint _tmp19_ = 0;
	g_return_val_if_fail (self != NULL, FALSE);
	_tmp0_ = graph_media_modelos_tablas_bd;
	_tmp1_ = self->llave;
	_tmp2_ = self->puerta;
	_tmp3_ = ((GraphMediaModelosTablas*) self)->nombre_tabla;
	_tmp4_ = self->llave;
	_tmp5_ = self->puerta;
	_tmp6_ = g_strdup_printf ("SELECT %s,%s FROM %s WHERE %s=? AND %s=?", _tmp1_, _tmp2_, _tmp3_, _tmp4_, _tmp5_);
	_tmp7_ = _tmp6_;
	_tmp9_ = sqlite3_prepare_v2 (_tmp0_, _tmp7_, -1, &_tmp8_, NULL);
	_sqlite3_finalize0 (query);
	query = _tmp8_;
	_tmp10_ = _tmp9_;
	_g_free0 (_tmp7_);
	res = _tmp10_;
	_tmp11_ = res;
	_vala_assert (_tmp11_ == SQLITE_OK, "res == Sqlite.OK");
	_tmp12_ = id1;
	_tmp13_ = sqlite3_bind_int64 (query, 1, _tmp12_);
	res = _tmp13_;
	_tmp14_ = res;
	_vala_assert (_tmp14_ == SQLITE_OK, "res == Sqlite.OK");
	_tmp15_ = id2;
	_tmp16_ = sqlite3_bind_int64 (query, 2, _tmp15_);
	res = _tmp16_;
	_tmp17_ = res;
	_vala_assert (_tmp17_ == SQLITE_OK, "res == Sqlite.OK");
	_tmp18_ = sqlite3_step (query);
	res = _tmp18_;
	_tmp19_ = res;
	result = _tmp19_ == SQLITE_ROW;
	_sqlite3_finalize0 (query);
	return result;
}


void graph_media_modelos_relacion_set_tabla_puerta (GraphMediaModelosRelacion* self, const gchar* columna) {
	const gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	g_return_if_fail (self != NULL);
	g_return_if_fail (columna != NULL);
	_tmp0_ = columna;
	_tmp1_ = g_strdup (_tmp0_);
	_g_free0 (self->tabla_puerta);
	self->tabla_puerta = _tmp1_;
}


void graph_media_modelos_relacion_set_tabla_llave (GraphMediaModelosRelacion* self, const gchar* columna) {
	const gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	g_return_if_fail (self != NULL);
	g_return_if_fail (columna != NULL);
	_tmp0_ = columna;
	_tmp1_ = g_strdup (_tmp0_);
	_g_free0 (self->tabla_puerta);
	self->tabla_puerta = _tmp1_;
}


void graph_media_modelos_relacion_set_llave (GraphMediaModelosRelacion* self, const gchar* columna) {
	const gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	g_return_if_fail (self != NULL);
	g_return_if_fail (columna != NULL);
	_tmp0_ = columna;
	_tmp1_ = g_strdup (_tmp0_);
	_g_free0 (self->llave);
	self->llave = _tmp1_;
}


void graph_media_modelos_relacion_set_puerta (GraphMediaModelosRelacion* self, const gchar* columna) {
	const gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	g_return_if_fail (self != NULL);
	g_return_if_fail (columna != NULL);
	_tmp0_ = columna;
	_tmp1_ = g_strdup (_tmp0_);
	_g_free0 (self->puerta);
	self->puerta = _tmp1_;
}


gboolean graph_media_modelos_relacion_relaciona_ids (GraphMediaModelosRelacion* self, gint64 id1, gint64 id2) {
	gboolean result = FALSE;
	sqlite3_stmt* query = NULL;
	gint64 _tmp0_ = 0LL;
	gint64 _tmp1_ = 0LL;
	gboolean _tmp2_ = FALSE;
	gint res = 0;
	sqlite3* _tmp3_ = NULL;
	const gchar* _tmp4_ = NULL;
	const gchar* _tmp5_ = NULL;
	const gchar* _tmp6_ = NULL;
	gchar* _tmp7_ = NULL;
	gchar* _tmp8_ = NULL;
	sqlite3_stmt* _tmp9_ = NULL;
	gint _tmp10_ = 0;
	gint _tmp11_ = 0;
	gint _tmp12_ = 0;
	sqlite3_stmt* _tmp13_ = NULL;
	gint64 _tmp14_ = 0LL;
	gint _tmp15_ = 0;
	gint _tmp16_ = 0;
	sqlite3_stmt* _tmp17_ = NULL;
	gint64 _tmp18_ = 0LL;
	gint _tmp19_ = 0;
	gint _tmp20_ = 0;
	sqlite3_stmt* _tmp21_ = NULL;
	gint _tmp22_ = 0;
	gint _tmp23_ = 0;
	g_return_val_if_fail (self != NULL, FALSE);
	_tmp0_ = id1;
	_tmp1_ = id2;
	_tmp2_ = graph_media_modelos_relacion_existe_relacion (self, _tmp0_, _tmp1_);
	if (_tmp2_) {
		result = FALSE;
		_sqlite3_finalize0 (query);
		return result;
	}
	_tmp3_ = graph_media_modelos_tablas_bd;
	_tmp4_ = ((GraphMediaModelosTablas*) self)->nombre_tabla;
	_tmp5_ = self->llave;
	_tmp6_ = self->puerta;
	_tmp7_ = g_strdup_printf ("INSERT INTO %s (%s, %s) values (?,?)", _tmp4_, _tmp5_, _tmp6_);
	_tmp8_ = _tmp7_;
	_tmp10_ = sqlite3_prepare_v2 (_tmp3_, _tmp8_, -1, &_tmp9_, NULL);
	_sqlite3_finalize0 (query);
	query = _tmp9_;
	_tmp11_ = _tmp10_;
	_g_free0 (_tmp8_);
	res = _tmp11_;
	_tmp12_ = res;
	_vala_assert (_tmp12_ == SQLITE_OK, "res == Sqlite.OK");
	_tmp13_ = query;
	_tmp14_ = id1;
	_tmp15_ = sqlite3_bind_int64 (_tmp13_, 1, _tmp14_);
	res = _tmp15_;
	_tmp16_ = res;
	_vala_assert (_tmp16_ == SQLITE_OK, "res == Sqlite.OK");
	_tmp17_ = query;
	_tmp18_ = id2;
	_tmp19_ = sqlite3_bind_int64 (_tmp17_, 2, _tmp18_);
	res = _tmp19_;
	_tmp20_ = res;
	_vala_assert (_tmp20_ == SQLITE_OK, "res == Sqlite.OK");
	_tmp21_ = query;
	_tmp22_ = sqlite3_step (_tmp21_);
	res = _tmp22_;
	_tmp23_ = res;
	result = _tmp23_ == SQLITE_ROW;
	_sqlite3_finalize0 (query);
	return result;
}


void graph_media_modelos_relacion_eliminar_relaciones_id (GraphMediaModelosRelacion* self, gint64 id) {
	gint64 _tmp0_ = 0LL;
	const gchar* _tmp1_ = NULL;
	gboolean _tmp2_ = FALSE;
	GError * _inner_error_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = id;
	_tmp1_ = self->llave;
	_tmp2_ = graph_media_modelos_relacion_eliminar_celda_por_columna (self, _tmp0_, _tmp1_);
	if (!_tmp2_) {
		const gchar* _tmp3_ = NULL;
		gchar* _tmp4_ = NULL;
		gchar* _tmp5_ = NULL;
		GError* _tmp6_ = NULL;
		GError* _tmp7_ = NULL;
		_tmp3_ = self->llave;
		_tmp4_ = g_strdup_printf ("No se pudo eliminar de la relacion %s", _tmp3_);
		_tmp5_ = _tmp4_;
		_tmp6_ = g_error_new_literal (GRAPH_MEDIA_MODELOS_ERROR_BASE_DATOS, GRAPH_MEDIA_MODELOS_ERROR_BASE_DATOS_CONSULTA, _tmp5_);
		_tmp7_ = _tmp6_;
		_g_free0 (_tmp5_);
		_inner_error_ = _tmp7_;
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
		g_clear_error (&_inner_error_);
		return;
	}
}


void graph_media_modelos_relacion_eliminar_relaciones_secundarias_id (GraphMediaModelosRelacion* self, gint64 id) {
	gint64 _tmp0_ = 0LL;
	const gchar* _tmp1_ = NULL;
	gboolean _tmp2_ = FALSE;
	GError * _inner_error_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = id;
	_tmp1_ = self->puerta;
	_tmp2_ = graph_media_modelos_relacion_eliminar_celda_por_columna (self, _tmp0_, _tmp1_);
	if (!_tmp2_) {
		const gchar* _tmp3_ = NULL;
		gchar* _tmp4_ = NULL;
		gchar* _tmp5_ = NULL;
		GError* _tmp6_ = NULL;
		GError* _tmp7_ = NULL;
		_tmp3_ = self->puerta;
		_tmp4_ = g_strdup_printf ("No se pudo eliminar de la relacion %s", _tmp3_);
		_tmp5_ = _tmp4_;
		_tmp6_ = g_error_new_literal (GRAPH_MEDIA_MODELOS_ERROR_BASE_DATOS, GRAPH_MEDIA_MODELOS_ERROR_BASE_DATOS_CONSULTA, _tmp5_);
		_tmp7_ = _tmp6_;
		_g_free0 (_tmp5_);
		_inner_error_ = _tmp7_;
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
		g_clear_error (&_inner_error_);
		return;
	}
}


gboolean graph_media_modelos_relacion_eliminar_relacion (GraphMediaModelosRelacion* self, gint64 id_llave, gint64 id_puerta) {
	gboolean result = FALSE;
	gint64 _tmp0_ = 0LL;
	gint64 _tmp1_ = 0LL;
	gboolean _tmp2_ = FALSE;
	sqlite3_stmt* query = NULL;
	gchar* sql = NULL;
	const gchar* _tmp3_ = NULL;
	const gchar* _tmp4_ = NULL;
	const gchar* _tmp5_ = NULL;
	gchar* _tmp6_ = NULL;
	gint res = 0;
	sqlite3* _tmp7_ = NULL;
	const gchar* _tmp8_ = NULL;
	sqlite3_stmt* _tmp9_ = NULL;
	gint _tmp10_ = 0;
	gint _tmp11_ = 0;
	sqlite3_stmt* _tmp12_ = NULL;
	gint64 _tmp13_ = 0LL;
	gint _tmp14_ = 0;
	gint _tmp15_ = 0;
	sqlite3_stmt* _tmp16_ = NULL;
	gint64 _tmp17_ = 0LL;
	gint _tmp18_ = 0;
	gint _tmp19_ = 0;
	sqlite3_stmt* _tmp20_ = NULL;
	gint _tmp21_ = 0;
	gint _tmp22_ = 0;
	g_return_val_if_fail (self != NULL, FALSE);
	_tmp0_ = id_llave;
	_tmp1_ = id_puerta;
	_tmp2_ = graph_media_modelos_relacion_existe_relacion (self, _tmp0_, _tmp1_);
	if (!_tmp2_) {
		result = FALSE;
		return result;
	}
	_tmp3_ = ((GraphMediaModelosTablas*) self)->nombre_tabla;
	_tmp4_ = self->llave;
	_tmp5_ = self->puerta;
	_tmp6_ = g_strdup_printf ("DELETE FROM %s WHERE %s=? AND %s=?", _tmp3_, _tmp4_, _tmp5_);
	sql = _tmp6_;
	_tmp7_ = graph_media_modelos_tablas_bd;
	_tmp8_ = sql;
	_tmp10_ = sqlite3_prepare_v2 (_tmp7_, _tmp8_, -1, &_tmp9_, NULL);
	_sqlite3_finalize0 (query);
	query = _tmp9_;
	res = _tmp10_;
	_tmp11_ = res;
	_vala_assert (_tmp11_ == SQLITE_OK, "res == Sqlite.OK");
	_tmp12_ = query;
	_tmp13_ = id_llave;
	_tmp14_ = sqlite3_bind_int64 (_tmp12_, 1, _tmp13_);
	res = _tmp14_;
	_tmp15_ = res;
	_vala_assert (_tmp15_ == SQLITE_OK, "res == Sqlite.OK");
	_tmp16_ = query;
	_tmp17_ = id_puerta;
	_tmp18_ = sqlite3_bind_int64 (_tmp16_, 2, _tmp17_);
	res = _tmp18_;
	_tmp19_ = res;
	_vala_assert (_tmp19_ == SQLITE_OK, "res == Sqlite.OK");
	_tmp20_ = query;
	_tmp21_ = sqlite3_step (_tmp20_);
	res = _tmp21_;
	_tmp22_ = res;
	result = _tmp22_ == SQLITE_DONE;
	_g_free0 (sql);
	_sqlite3_finalize0 (query);
	return result;
}


static gboolean graph_media_modelos_relacion_eliminar_celda_por_columna (GraphMediaModelosRelacion* self, gint64 id, const gchar* columna) {
	gboolean result = FALSE;
	sqlite3_stmt* query = NULL;
	gchar* sql = NULL;
	const gchar* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	gchar* _tmp2_ = NULL;
	gint res = 0;
	sqlite3* _tmp3_ = NULL;
	sqlite3_stmt* _tmp4_ = NULL;
	gint _tmp5_ = 0;
	gint _tmp6_ = 0;
	gint64 _tmp7_ = 0LL;
	gint _tmp8_ = 0;
	gint _tmp9_ = 0;
	gint _tmp10_ = 0;
	gint _tmp11_ = 0;
	g_return_val_if_fail (self != NULL, FALSE);
	g_return_val_if_fail (columna != NULL, FALSE);
	_tmp0_ = ((GraphMediaModelosTablas*) self)->nombre_tabla;
	_tmp1_ = columna;
	_tmp2_ = g_strdup_printf ("DELETE FROM %s WHERE %s=?", _tmp0_, _tmp1_);
	sql = _tmp2_;
	_tmp3_ = graph_media_modelos_tablas_bd;
	_tmp5_ = sqlite3_prepare_v2 (_tmp3_, sql, -1, &_tmp4_, NULL);
	_sqlite3_finalize0 (query);
	query = _tmp4_;
	res = _tmp5_;
	_tmp6_ = res;
	_vala_assert (_tmp6_ == SQLITE_OK, "res == Sqlite.OK");
	_tmp7_ = id;
	_tmp8_ = sqlite3_bind_int64 (query, 1, _tmp7_);
	res = _tmp8_;
	_tmp9_ = res;
	_vala_assert (_tmp9_ == SQLITE_OK, "res == Sqlite.OK");
	_tmp10_ = sqlite3_step (query);
	res = _tmp10_;
	_tmp11_ = res;
	result = _tmp11_ == SQLITE_DONE;
	_g_free0 (sql);
	_sqlite3_finalize0 (query);
	return result;
}


gint graph_media_modelos_relacion_total_relaciones_llave (GraphMediaModelosRelacion* self, gint64 id) {
	gint result = 0;
	const gchar* _tmp0_ = NULL;
	gint64 _tmp1_ = 0LL;
	gchar* _tmp2_ = NULL;
	gchar* _tmp3_ = NULL;
	gint _tmp4_ = 0;
	gint _tmp5_ = 0;
	g_return_val_if_fail (self != NULL, 0);
	_tmp0_ = self->llave;
	_tmp1_ = id;
	_tmp2_ = g_strdup_printf ("%s = %lld", _tmp0_, _tmp1_);
	_tmp3_ = _tmp2_;
	_tmp4_ = graph_media_modelos_tablas_get_total_celdas ((GraphMediaModelosTablas*) self, _tmp3_);
	_tmp5_ = _tmp4_;
	_g_free0 (_tmp3_);
	result = _tmp5_;
	return result;
}


gint graph_media_modelos_relacion_total_relaciones_puerta (GraphMediaModelosRelacion* self, gint64 id) {
	gint result = 0;
	const gchar* _tmp0_ = NULL;
	gint64 _tmp1_ = 0LL;
	gchar* _tmp2_ = NULL;
	gchar* _tmp3_ = NULL;
	gint _tmp4_ = 0;
	gint _tmp5_ = 0;
	g_return_val_if_fail (self != NULL, 0);
	_tmp0_ = self->puerta;
	_tmp1_ = id;
	_tmp2_ = g_strdup_printf ("%s = %lld", _tmp0_, _tmp1_);
	_tmp3_ = _tmp2_;
	_tmp4_ = graph_media_modelos_tablas_get_total_celdas ((GraphMediaModelosTablas*) self, _tmp3_);
	_tmp5_ = _tmp4_;
	_g_free0 (_tmp3_);
	result = _tmp5_;
	return result;
}


GraphMediaModelosRelacion* graph_media_modelos_relacion_construct (GType object_type) {
	GraphMediaModelosRelacion * self = NULL;
	self = (GraphMediaModelosRelacion*) graph_media_modelos_tablas_construct (object_type);
	return self;
}


static void graph_media_modelos_relacion_class_init (GraphMediaModelosRelacionClass * klass) {
	graph_media_modelos_relacion_parent_class = g_type_class_peek_parent (klass);
	G_OBJECT_CLASS (klass)->finalize = graph_media_modelos_relacion_finalize;
}


static void graph_media_modelos_relacion_instance_init (GraphMediaModelosRelacion * self) {
}


static void graph_media_modelos_relacion_finalize (GObject* obj) {
	GraphMediaModelosRelacion * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, GRAPH_MEDIA_MODELOS_TYPE_RELACION, GraphMediaModelosRelacion);
	_g_free0 (self->llave);
	_g_free0 (self->puerta);
	_g_free0 (self->tabla_llave);
	_g_free0 (self->tabla_puerta);
	G_OBJECT_CLASS (graph_media_modelos_relacion_parent_class)->finalize (obj);
}


GType graph_media_modelos_relacion_get_type (void) {
	static volatile gsize graph_media_modelos_relacion_type_id__volatile = 0;
	if (g_once_init_enter (&graph_media_modelos_relacion_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (GraphMediaModelosRelacionClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) graph_media_modelos_relacion_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (GraphMediaModelosRelacion), 0, (GInstanceInitFunc) graph_media_modelos_relacion_instance_init, NULL };
		GType graph_media_modelos_relacion_type_id;
		graph_media_modelos_relacion_type_id = g_type_register_static (GRAPH_MEDIA_MODELOS_TYPE_TABLAS, "GraphMediaModelosRelacion", &g_define_type_info, G_TYPE_FLAG_ABSTRACT);
		g_once_init_leave (&graph_media_modelos_relacion_type_id__volatile, graph_media_modelos_relacion_type_id);
	}
	return graph_media_modelos_relacion_type_id__volatile;
}



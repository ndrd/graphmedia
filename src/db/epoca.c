/* epoca.c generated by valac 0.26.0, the Vala compiler
 * generated from epoca.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <string.h>
#include <float.h>
#include <math.h>
#include <stdlib.h>


#define GRAPH_MEDIA_MODELOS_TYPE_EPOCA (graph_media_modelos_epoca_get_type ())
typedef struct _GraphMediaModelosEpoca GraphMediaModelosEpoca;
#define _g_date_time_unref0(var) ((var == NULL) ? NULL : (var = (g_date_time_unref (var), NULL)))

struct _GraphMediaModelosEpoca {
	GDateTime* fecha;
};



GType graph_media_modelos_epoca_get_type (void) G_GNUC_CONST;
GraphMediaModelosEpoca* graph_media_modelos_epoca_dup (const GraphMediaModelosEpoca* self);
void graph_media_modelos_epoca_free (GraphMediaModelosEpoca* self);
void graph_media_modelos_epoca_copy (const GraphMediaModelosEpoca* self, GraphMediaModelosEpoca* dest);
void graph_media_modelos_epoca_destroy (GraphMediaModelosEpoca* self);
void graph_media_modelos_epoca_init (GraphMediaModelosEpoca *self, gint dia, gint mes, gint anio);
void graph_media_modelos_epoca_init_cadena (GraphMediaModelosEpoca *self, const gchar* iso8601);
gboolean graph_media_modelos_epoca_mismo_anio (GraphMediaModelosEpoca *self, GraphMediaModelosEpoca* b);
gboolean graph_media_modelos_epoca_mismo_mes (GraphMediaModelosEpoca *self, GraphMediaModelosEpoca* b);
gboolean graph_media_modelos_epoca_mismo_dia (GraphMediaModelosEpoca *self, GraphMediaModelosEpoca* b);
gchar* graph_media_modelos_epoca_to_string (GraphMediaModelosEpoca *self);


/**
* Constructor que recibe un año, mes y dia para crear una nueva fecha
* y crear relaciones entre los archivos
*/
void graph_media_modelos_epoca_init (GraphMediaModelosEpoca *self, gint dia, gint mes, gint anio) {
	gint _tmp0_ = 0;
	gint _tmp1_ = 0;
	gint _tmp2_ = 0;
	GDateTime* _tmp3_ = NULL;
	memset (self, 0, sizeof (GraphMediaModelosEpoca));
	_tmp0_ = anio;
	_tmp1_ = mes;
	_tmp2_ = dia;
	_tmp3_ = g_date_time_new_local (_tmp0_, _tmp1_, _tmp2_, 0, 0, (gdouble) 0);
	_g_date_time_unref0 ((*self).fecha);
	(*self).fecha = _tmp3_;
}


void graph_media_modelos_epoca_init_cadena (GraphMediaModelosEpoca *self, const gchar* iso8601) {
	GTimeVal t = {0};
	const gchar* _tmp0_ = NULL;
	GTimeVal _tmp1_ = {0};
	GDateTime* _tmp2_ = NULL;
	g_return_if_fail (iso8601 != NULL);
	memset (self, 0, sizeof (GraphMediaModelosEpoca));
	g_get_current_time (&t);
	_tmp0_ = iso8601;
	g_time_val_from_iso8601 (_tmp0_, &t);
	_tmp1_ = t;
	_tmp2_ = g_date_time_new_from_timeval_local (&_tmp1_);
	_g_date_time_unref0 ((*self).fecha);
	(*self).fecha = _tmp2_;
}


/**
* Compara dos epocas y determina si son del mismo año
*/
gboolean graph_media_modelos_epoca_mismo_anio (GraphMediaModelosEpoca *self, GraphMediaModelosEpoca* b) {
	gboolean result = FALSE;
	GDateTime* _tmp0_ = NULL;
	gint _tmp1_ = 0;
	GraphMediaModelosEpoca _tmp2_ = {0};
	GDateTime* _tmp3_ = NULL;
	gint _tmp4_ = 0;
	g_return_val_if_fail (b != NULL, FALSE);
	_tmp0_ = (*self).fecha;
	_tmp1_ = g_date_time_get_year (_tmp0_);
	_tmp2_ = *b;
	_tmp3_ = _tmp2_.fecha;
	_tmp4_ = g_date_time_get_year (_tmp3_);
	result = _tmp1_ == _tmp4_;
	return result;
}


/**
* Determina si dos epocas son del mismo mes y por ende, año
*/
gboolean graph_media_modelos_epoca_mismo_mes (GraphMediaModelosEpoca *self, GraphMediaModelosEpoca* b) {
	gboolean result = FALSE;
	GDateTime* _tmp0_ = NULL;
	gint _tmp1_ = 0;
	GraphMediaModelosEpoca _tmp2_ = {0};
	GDateTime* _tmp3_ = NULL;
	gint _tmp4_ = 0;
	g_return_val_if_fail (b != NULL, FALSE);
	_tmp0_ = (*self).fecha;
	_tmp1_ = g_date_time_get_month (_tmp0_);
	_tmp2_ = *b;
	_tmp3_ = _tmp2_.fecha;
	_tmp4_ = g_date_time_get_month (_tmp3_);
	result = _tmp1_ == _tmp4_;
	return result;
}


/**
* Compara dos fechas y determina si son de la mismo epocas 
*/
gboolean graph_media_modelos_epoca_mismo_dia (GraphMediaModelosEpoca *self, GraphMediaModelosEpoca* b) {
	gboolean result = FALSE;
	GDateTime* _tmp0_ = NULL;
	gint _tmp1_ = 0;
	GraphMediaModelosEpoca _tmp2_ = {0};
	GDateTime* _tmp3_ = NULL;
	gint _tmp4_ = 0;
	g_return_val_if_fail (b != NULL, FALSE);
	_tmp0_ = (*self).fecha;
	_tmp1_ = g_date_time_get_day_of_month (_tmp0_);
	_tmp2_ = *b;
	_tmp3_ = _tmp2_.fecha;
	_tmp4_ = g_date_time_get_day_of_month (_tmp3_);
	result = _tmp1_ == _tmp4_;
	return result;
}


static gchar* g_date_time_to_string (GDateTime* self) {
	gchar* result = NULL;
	gchar* _tmp0_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = g_date_time_format (self, "%FT%H:%M:%S%z");
	result = _tmp0_;
	return result;
}


gchar* graph_media_modelos_epoca_to_string (GraphMediaModelosEpoca *self) {
	gchar* result = NULL;
	GDateTime* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	_tmp0_ = (*self).fecha;
	_tmp1_ = g_date_time_to_string (_tmp0_);
	result = _tmp1_;
	return result;
}


static gpointer _g_date_time_ref0 (gpointer self) {
	return self ? g_date_time_ref (self) : NULL;
}


void graph_media_modelos_epoca_copy (const GraphMediaModelosEpoca* self, GraphMediaModelosEpoca* dest) {
	GDateTime* _tmp0_ = NULL;
	GDateTime* _tmp1_ = NULL;
	_tmp0_ = (*self).fecha;
	_tmp1_ = _g_date_time_ref0 (_tmp0_);
	_g_date_time_unref0 ((*dest).fecha);
	(*dest).fecha = _tmp1_;
}


void graph_media_modelos_epoca_destroy (GraphMediaModelosEpoca* self) {
	_g_date_time_unref0 ((*self).fecha);
}


GraphMediaModelosEpoca* graph_media_modelos_epoca_dup (const GraphMediaModelosEpoca* self) {
	GraphMediaModelosEpoca* dup;
	dup = g_new0 (GraphMediaModelosEpoca, 1);
	graph_media_modelos_epoca_copy (self, dup);
	return dup;
}


void graph_media_modelos_epoca_free (GraphMediaModelosEpoca* self) {
	graph_media_modelos_epoca_destroy (self);
	g_free (self);
}


GType graph_media_modelos_epoca_get_type (void) {
	static volatile gsize graph_media_modelos_epoca_type_id__volatile = 0;
	if (g_once_init_enter (&graph_media_modelos_epoca_type_id__volatile)) {
		GType graph_media_modelos_epoca_type_id;
		graph_media_modelos_epoca_type_id = g_boxed_type_register_static ("GraphMediaModelosEpoca", (GBoxedCopyFunc) graph_media_modelos_epoca_dup, (GBoxedFreeFunc) graph_media_modelos_epoca_free);
		g_once_init_leave (&graph_media_modelos_epoca_type_id__volatile, graph_media_modelos_epoca_type_id);
	}
	return graph_media_modelos_epoca_type_id__volatile;
}



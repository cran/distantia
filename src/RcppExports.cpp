// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// auto_distance_cpp
double auto_distance_cpp(NumericMatrix x, const std::string& distance);
RcppExport SEXP _distantia_auto_distance_cpp(SEXP xSEXP, SEXP distanceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type distance(distanceSEXP);
    rcpp_result_gen = Rcpp::wrap(auto_distance_cpp(x, distance));
    return rcpp_result_gen;
END_RCPP
}
// subset_matrix_by_rows_cpp
NumericMatrix subset_matrix_by_rows_cpp(NumericMatrix m, NumericVector rows);
RcppExport SEXP _distantia_subset_matrix_by_rows_cpp(SEXP mSEXP, SEXP rowsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type m(mSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type rows(rowsSEXP);
    rcpp_result_gen = Rcpp::wrap(subset_matrix_by_rows_cpp(m, rows));
    return rcpp_result_gen;
END_RCPP
}
// auto_sum_full_cpp
double auto_sum_full_cpp(NumericMatrix x, NumericMatrix y, const std::string& distance);
RcppExport SEXP _distantia_auto_sum_full_cpp(SEXP xSEXP, SEXP ySEXP, SEXP distanceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type y(ySEXP);
    Rcpp::traits::input_parameter< const std::string& >::type distance(distanceSEXP);
    rcpp_result_gen = Rcpp::wrap(auto_sum_full_cpp(x, y, distance));
    return rcpp_result_gen;
END_RCPP
}
// auto_sum_path_cpp
double auto_sum_path_cpp(NumericMatrix x, NumericMatrix y, DataFrame path, const std::string& distance);
RcppExport SEXP _distantia_auto_sum_path_cpp(SEXP xSEXP, SEXP ySEXP, SEXP pathSEXP, SEXP distanceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type y(ySEXP);
    Rcpp::traits::input_parameter< DataFrame >::type path(pathSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type distance(distanceSEXP);
    rcpp_result_gen = Rcpp::wrap(auto_sum_path_cpp(x, y, path, distance));
    return rcpp_result_gen;
END_RCPP
}
// auto_sum_cpp
double auto_sum_cpp(NumericMatrix x, NumericMatrix y, DataFrame path, const std::string& distance, bool ignore_blocks);
RcppExport SEXP _distantia_auto_sum_cpp(SEXP xSEXP, SEXP ySEXP, SEXP pathSEXP, SEXP distanceSEXP, SEXP ignore_blocksSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type y(ySEXP);
    Rcpp::traits::input_parameter< DataFrame >::type path(pathSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type distance(distanceSEXP);
    Rcpp::traits::input_parameter< bool >::type ignore_blocks(ignore_blocksSEXP);
    rcpp_result_gen = Rcpp::wrap(auto_sum_cpp(x, y, path, distance, ignore_blocks));
    return rcpp_result_gen;
END_RCPP
}
// cost_matrix_diagonal_cpp
NumericMatrix cost_matrix_diagonal_cpp(NumericMatrix dist_matrix);
RcppExport SEXP _distantia_cost_matrix_diagonal_cpp(SEXP dist_matrixSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type dist_matrix(dist_matrixSEXP);
    rcpp_result_gen = Rcpp::wrap(cost_matrix_diagonal_cpp(dist_matrix));
    return rcpp_result_gen;
END_RCPP
}
// cost_matrix_diagonal_weighted_cpp
NumericMatrix cost_matrix_diagonal_weighted_cpp(NumericMatrix dist_matrix);
RcppExport SEXP _distantia_cost_matrix_diagonal_weighted_cpp(SEXP dist_matrixSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type dist_matrix(dist_matrixSEXP);
    rcpp_result_gen = Rcpp::wrap(cost_matrix_diagonal_weighted_cpp(dist_matrix));
    return rcpp_result_gen;
END_RCPP
}
// cost_matrix_orthogonal_cpp
NumericMatrix cost_matrix_orthogonal_cpp(NumericMatrix dist_matrix);
RcppExport SEXP _distantia_cost_matrix_orthogonal_cpp(SEXP dist_matrixSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type dist_matrix(dist_matrixSEXP);
    rcpp_result_gen = Rcpp::wrap(cost_matrix_orthogonal_cpp(dist_matrix));
    return rcpp_result_gen;
END_RCPP
}
// cost_path_slotting_cpp
DataFrame cost_path_slotting_cpp(NumericMatrix dist_matrix, NumericMatrix cost_matrix);
RcppExport SEXP _distantia_cost_path_slotting_cpp(SEXP dist_matrixSEXP, SEXP cost_matrixSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type dist_matrix(dist_matrixSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type cost_matrix(cost_matrixSEXP);
    rcpp_result_gen = Rcpp::wrap(cost_path_slotting_cpp(dist_matrix, cost_matrix));
    return rcpp_result_gen;
END_RCPP
}
// cost_path_orthogonal_bandwidth_cpp
DataFrame cost_path_orthogonal_bandwidth_cpp(NumericMatrix dist_matrix, NumericMatrix cost_matrix, double bandwidth);
RcppExport SEXP _distantia_cost_path_orthogonal_bandwidth_cpp(SEXP dist_matrixSEXP, SEXP cost_matrixSEXP, SEXP bandwidthSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type dist_matrix(dist_matrixSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type cost_matrix(cost_matrixSEXP);
    Rcpp::traits::input_parameter< double >::type bandwidth(bandwidthSEXP);
    rcpp_result_gen = Rcpp::wrap(cost_path_orthogonal_bandwidth_cpp(dist_matrix, cost_matrix, bandwidth));
    return rcpp_result_gen;
END_RCPP
}
// cost_path_orthogonal_cpp
DataFrame cost_path_orthogonal_cpp(NumericMatrix dist_matrix, NumericMatrix cost_matrix);
RcppExport SEXP _distantia_cost_path_orthogonal_cpp(SEXP dist_matrixSEXP, SEXP cost_matrixSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type dist_matrix(dist_matrixSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type cost_matrix(cost_matrixSEXP);
    rcpp_result_gen = Rcpp::wrap(cost_path_orthogonal_cpp(dist_matrix, cost_matrix));
    return rcpp_result_gen;
END_RCPP
}
// cost_path_diagonal_bandwidth_cpp
DataFrame cost_path_diagonal_bandwidth_cpp(NumericMatrix dist_matrix, NumericMatrix cost_matrix, double bandwidth);
RcppExport SEXP _distantia_cost_path_diagonal_bandwidth_cpp(SEXP dist_matrixSEXP, SEXP cost_matrixSEXP, SEXP bandwidthSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type dist_matrix(dist_matrixSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type cost_matrix(cost_matrixSEXP);
    Rcpp::traits::input_parameter< double >::type bandwidth(bandwidthSEXP);
    rcpp_result_gen = Rcpp::wrap(cost_path_diagonal_bandwidth_cpp(dist_matrix, cost_matrix, bandwidth));
    return rcpp_result_gen;
END_RCPP
}
// cost_path_diagonal_cpp
DataFrame cost_path_diagonal_cpp(NumericMatrix dist_matrix, NumericMatrix cost_matrix);
RcppExport SEXP _distantia_cost_path_diagonal_cpp(SEXP dist_matrixSEXP, SEXP cost_matrixSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type dist_matrix(dist_matrixSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type cost_matrix(cost_matrixSEXP);
    rcpp_result_gen = Rcpp::wrap(cost_path_diagonal_cpp(dist_matrix, cost_matrix));
    return rcpp_result_gen;
END_RCPP
}
// cost_path_trim_cpp
DataFrame cost_path_trim_cpp(DataFrame path);
RcppExport SEXP _distantia_cost_path_trim_cpp(SEXP pathSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type path(pathSEXP);
    rcpp_result_gen = Rcpp::wrap(cost_path_trim_cpp(path));
    return rcpp_result_gen;
END_RCPP
}
// cost_path_sum_cpp
double cost_path_sum_cpp(DataFrame path);
RcppExport SEXP _distantia_cost_path_sum_cpp(SEXP pathSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type path(pathSEXP);
    rcpp_result_gen = Rcpp::wrap(cost_path_sum_cpp(path));
    return rcpp_result_gen;
END_RCPP
}
// cost_path_cpp
DataFrame cost_path_cpp(NumericMatrix x, NumericMatrix y, const std::string& distance, bool diagonal, bool weighted, bool ignore_blocks, double bandwidth);
RcppExport SEXP _distantia_cost_path_cpp(SEXP xSEXP, SEXP ySEXP, SEXP distanceSEXP, SEXP diagonalSEXP, SEXP weightedSEXP, SEXP ignore_blocksSEXP, SEXP bandwidthSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type y(ySEXP);
    Rcpp::traits::input_parameter< const std::string& >::type distance(distanceSEXP);
    Rcpp::traits::input_parameter< bool >::type diagonal(diagonalSEXP);
    Rcpp::traits::input_parameter< bool >::type weighted(weightedSEXP);
    Rcpp::traits::input_parameter< bool >::type ignore_blocks(ignore_blocksSEXP);
    Rcpp::traits::input_parameter< double >::type bandwidth(bandwidthSEXP);
    rcpp_result_gen = Rcpp::wrap(cost_path_cpp(x, y, distance, diagonal, weighted, ignore_blocks, bandwidth));
    return rcpp_result_gen;
END_RCPP
}
// distance_matrix_cpp
NumericMatrix distance_matrix_cpp(NumericMatrix x, NumericMatrix y, const std::string& distance);
RcppExport SEXP _distantia_distance_matrix_cpp(SEXP xSEXP, SEXP ySEXP, SEXP distanceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type y(ySEXP);
    Rcpp::traits::input_parameter< const std::string& >::type distance(distanceSEXP);
    rcpp_result_gen = Rcpp::wrap(distance_matrix_cpp(x, y, distance));
    return rcpp_result_gen;
END_RCPP
}
// distance_ls_cpp
double distance_ls_cpp(NumericMatrix x, NumericMatrix y, const std::string& distance);
RcppExport SEXP _distantia_distance_ls_cpp(SEXP xSEXP, SEXP ySEXP, SEXP distanceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type y(ySEXP);
    Rcpp::traits::input_parameter< const std::string& >::type distance(distanceSEXP);
    rcpp_result_gen = Rcpp::wrap(distance_ls_cpp(x, y, distance));
    return rcpp_result_gen;
END_RCPP
}
// distance_chebyshev_cpp
double distance_chebyshev_cpp(NumericVector x, NumericVector y);
RcppExport SEXP _distantia_distance_chebyshev_cpp(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(distance_chebyshev_cpp(x, y));
    return rcpp_result_gen;
END_RCPP
}
// distance_jaccard_cpp
double distance_jaccard_cpp(NumericVector x, NumericVector y);
RcppExport SEXP _distantia_distance_jaccard_cpp(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(distance_jaccard_cpp(x, y));
    return rcpp_result_gen;
END_RCPP
}
// distance_manhattan_cpp
double distance_manhattan_cpp(NumericVector x, NumericVector y);
RcppExport SEXP _distantia_distance_manhattan_cpp(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(distance_manhattan_cpp(x, y));
    return rcpp_result_gen;
END_RCPP
}
// distance_euclidean_cpp
double distance_euclidean_cpp(NumericVector x, NumericVector y);
RcppExport SEXP _distantia_distance_euclidean_cpp(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(distance_euclidean_cpp(x, y));
    return rcpp_result_gen;
END_RCPP
}
// distance_hellinger_cpp
double distance_hellinger_cpp(NumericVector x, NumericVector y);
RcppExport SEXP _distantia_distance_hellinger_cpp(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(distance_hellinger_cpp(x, y));
    return rcpp_result_gen;
END_RCPP
}
// distance_chi_cpp
double distance_chi_cpp(NumericVector x, NumericVector y);
RcppExport SEXP _distantia_distance_chi_cpp(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(distance_chi_cpp(x, y));
    return rcpp_result_gen;
END_RCPP
}
// distance_canberra_cpp
double distance_canberra_cpp(NumericVector x, NumericVector y);
RcppExport SEXP _distantia_distance_canberra_cpp(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(distance_canberra_cpp(x, y));
    return rcpp_result_gen;
END_RCPP
}
// distance_russelrao_cpp
double distance_russelrao_cpp(NumericVector x, NumericVector y);
RcppExport SEXP _distantia_distance_russelrao_cpp(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(distance_russelrao_cpp(x, y));
    return rcpp_result_gen;
END_RCPP
}
// distance_cosine_cpp
double distance_cosine_cpp(NumericVector x, NumericVector y);
RcppExport SEXP _distantia_distance_cosine_cpp(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(distance_cosine_cpp(x, y));
    return rcpp_result_gen;
END_RCPP
}
// distance_hamming_cpp
double distance_hamming_cpp(NumericVector x, NumericVector y);
RcppExport SEXP _distantia_distance_hamming_cpp(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(distance_hamming_cpp(x, y));
    return rcpp_result_gen;
END_RCPP
}
// distance_bray_curtis_cpp
double distance_bray_curtis_cpp(NumericVector x, NumericVector y);
RcppExport SEXP _distantia_distance_bray_curtis_cpp(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(distance_bray_curtis_cpp(x, y));
    return rcpp_result_gen;
END_RCPP
}
// distance_sorensen_cpp
double distance_sorensen_cpp(NumericVector x, NumericVector y);
RcppExport SEXP _distantia_distance_sorensen_cpp(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(distance_sorensen_cpp(x, y));
    return rcpp_result_gen;
END_RCPP
}
// update_path_dist_cpp
DataFrame update_path_dist_cpp(NumericMatrix x, NumericMatrix y, DataFrame path, const std::string& distance);
RcppExport SEXP _distantia_update_path_dist_cpp(SEXP xSEXP, SEXP ySEXP, SEXP pathSEXP, SEXP distanceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type y(ySEXP);
    Rcpp::traits::input_parameter< DataFrame >::type path(pathSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type distance(distanceSEXP);
    rcpp_result_gen = Rcpp::wrap(update_path_dist_cpp(x, y, path, distance));
    return rcpp_result_gen;
END_RCPP
}
// select_column_cpp
NumericMatrix select_column_cpp(NumericMatrix x, int column_index);
RcppExport SEXP _distantia_select_column_cpp(SEXP xSEXP, SEXP column_indexSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type column_index(column_indexSEXP);
    rcpp_result_gen = Rcpp::wrap(select_column_cpp(x, column_index));
    return rcpp_result_gen;
END_RCPP
}
// delete_column_cpp
NumericMatrix delete_column_cpp(NumericMatrix x, int column_index);
RcppExport SEXP _distantia_delete_column_cpp(SEXP xSEXP, SEXP column_indexSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type column_index(column_indexSEXP);
    rcpp_result_gen = Rcpp::wrap(delete_column_cpp(x, column_index));
    return rcpp_result_gen;
END_RCPP
}
// importance_ls_cpp
DataFrame importance_ls_cpp(NumericMatrix x, NumericMatrix y, const std::string& distance);
RcppExport SEXP _distantia_importance_ls_cpp(SEXP xSEXP, SEXP ySEXP, SEXP distanceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type y(ySEXP);
    Rcpp::traits::input_parameter< const std::string& >::type distance(distanceSEXP);
    rcpp_result_gen = Rcpp::wrap(importance_ls_cpp(x, y, distance));
    return rcpp_result_gen;
END_RCPP
}
// importance_dtw_legacy_cpp
DataFrame importance_dtw_legacy_cpp(NumericMatrix y, NumericMatrix x, const std::string& distance, bool diagonal, bool weighted, bool ignore_blocks, double bandwidth);
RcppExport SEXP _distantia_importance_dtw_legacy_cpp(SEXP ySEXP, SEXP xSEXP, SEXP distanceSEXP, SEXP diagonalSEXP, SEXP weightedSEXP, SEXP ignore_blocksSEXP, SEXP bandwidthSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type distance(distanceSEXP);
    Rcpp::traits::input_parameter< bool >::type diagonal(diagonalSEXP);
    Rcpp::traits::input_parameter< bool >::type weighted(weightedSEXP);
    Rcpp::traits::input_parameter< bool >::type ignore_blocks(ignore_blocksSEXP);
    Rcpp::traits::input_parameter< double >::type bandwidth(bandwidthSEXP);
    rcpp_result_gen = Rcpp::wrap(importance_dtw_legacy_cpp(y, x, distance, diagonal, weighted, ignore_blocks, bandwidth));
    return rcpp_result_gen;
END_RCPP
}
// importance_dtw_cpp
DataFrame importance_dtw_cpp(NumericMatrix x, NumericMatrix y, const std::string& distance, bool diagonal, bool weighted, bool ignore_blocks, double bandwidth);
RcppExport SEXP _distantia_importance_dtw_cpp(SEXP xSEXP, SEXP ySEXP, SEXP distanceSEXP, SEXP diagonalSEXP, SEXP weightedSEXP, SEXP ignore_blocksSEXP, SEXP bandwidthSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type y(ySEXP);
    Rcpp::traits::input_parameter< const std::string& >::type distance(distanceSEXP);
    Rcpp::traits::input_parameter< bool >::type diagonal(diagonalSEXP);
    Rcpp::traits::input_parameter< bool >::type weighted(weightedSEXP);
    Rcpp::traits::input_parameter< bool >::type ignore_blocks(ignore_blocksSEXP);
    Rcpp::traits::input_parameter< double >::type bandwidth(bandwidthSEXP);
    rcpp_result_gen = Rcpp::wrap(importance_dtw_cpp(x, y, distance, diagonal, weighted, ignore_blocks, bandwidth));
    return rcpp_result_gen;
END_RCPP
}
// permute_restricted_by_row_cpp
NumericMatrix permute_restricted_by_row_cpp(NumericMatrix x, int block_size, int seed);
RcppExport SEXP _distantia_permute_restricted_by_row_cpp(SEXP xSEXP, SEXP block_sizeSEXP, SEXP seedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type block_size(block_sizeSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    rcpp_result_gen = Rcpp::wrap(permute_restricted_by_row_cpp(x, block_size, seed));
    return rcpp_result_gen;
END_RCPP
}
// permute_free_by_row_cpp
NumericMatrix permute_free_by_row_cpp(NumericMatrix x, int block_size, int seed);
RcppExport SEXP _distantia_permute_free_by_row_cpp(SEXP xSEXP, SEXP block_sizeSEXP, SEXP seedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type block_size(block_sizeSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    rcpp_result_gen = Rcpp::wrap(permute_free_by_row_cpp(x, block_size, seed));
    return rcpp_result_gen;
END_RCPP
}
// permute_restricted_cpp
NumericMatrix permute_restricted_cpp(NumericMatrix x, int block_size, int seed);
RcppExport SEXP _distantia_permute_restricted_cpp(SEXP xSEXP, SEXP block_sizeSEXP, SEXP seedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type block_size(block_sizeSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    rcpp_result_gen = Rcpp::wrap(permute_restricted_cpp(x, block_size, seed));
    return rcpp_result_gen;
END_RCPP
}
// permute_free_cpp
NumericMatrix permute_free_cpp(NumericMatrix x, int block_size, int seed);
RcppExport SEXP _distantia_permute_free_cpp(SEXP xSEXP, SEXP block_sizeSEXP, SEXP seedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type block_size(block_sizeSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    rcpp_result_gen = Rcpp::wrap(permute_free_cpp(x, block_size, seed));
    return rcpp_result_gen;
END_RCPP
}
// psi_equation_cpp
double psi_equation_cpp(double a, double b, bool diagonal);
RcppExport SEXP _distantia_psi_equation_cpp(SEXP aSEXP, SEXP bSEXP, SEXP diagonalSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< double >::type b(bSEXP);
    Rcpp::traits::input_parameter< bool >::type diagonal(diagonalSEXP);
    rcpp_result_gen = Rcpp::wrap(psi_equation_cpp(a, b, diagonal));
    return rcpp_result_gen;
END_RCPP
}
// psi_ls_cpp
double psi_ls_cpp(NumericMatrix x, NumericMatrix y, const std::string& distance);
RcppExport SEXP _distantia_psi_ls_cpp(SEXP xSEXP, SEXP ySEXP, SEXP distanceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type y(ySEXP);
    Rcpp::traits::input_parameter< const std::string& >::type distance(distanceSEXP);
    rcpp_result_gen = Rcpp::wrap(psi_ls_cpp(x, y, distance));
    return rcpp_result_gen;
END_RCPP
}
// psi_null_ls_cpp
NumericVector psi_null_ls_cpp(NumericMatrix x, NumericMatrix y, const std::string& distance, int repetitions, const std::string& permutation, int block_size, int seed);
RcppExport SEXP _distantia_psi_null_ls_cpp(SEXP xSEXP, SEXP ySEXP, SEXP distanceSEXP, SEXP repetitionsSEXP, SEXP permutationSEXP, SEXP block_sizeSEXP, SEXP seedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type y(ySEXP);
    Rcpp::traits::input_parameter< const std::string& >::type distance(distanceSEXP);
    Rcpp::traits::input_parameter< int >::type repetitions(repetitionsSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type permutation(permutationSEXP);
    Rcpp::traits::input_parameter< int >::type block_size(block_sizeSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    rcpp_result_gen = Rcpp::wrap(psi_null_ls_cpp(x, y, distance, repetitions, permutation, block_size, seed));
    return rcpp_result_gen;
END_RCPP
}
// psi_dtw_cpp
double psi_dtw_cpp(NumericMatrix x, NumericMatrix y, const std::string& distance, bool diagonal, bool weighted, bool ignore_blocks, double bandwidth);
RcppExport SEXP _distantia_psi_dtw_cpp(SEXP xSEXP, SEXP ySEXP, SEXP distanceSEXP, SEXP diagonalSEXP, SEXP weightedSEXP, SEXP ignore_blocksSEXP, SEXP bandwidthSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type y(ySEXP);
    Rcpp::traits::input_parameter< const std::string& >::type distance(distanceSEXP);
    Rcpp::traits::input_parameter< bool >::type diagonal(diagonalSEXP);
    Rcpp::traits::input_parameter< bool >::type weighted(weightedSEXP);
    Rcpp::traits::input_parameter< bool >::type ignore_blocks(ignore_blocksSEXP);
    Rcpp::traits::input_parameter< double >::type bandwidth(bandwidthSEXP);
    rcpp_result_gen = Rcpp::wrap(psi_dtw_cpp(x, y, distance, diagonal, weighted, ignore_blocks, bandwidth));
    return rcpp_result_gen;
END_RCPP
}
// psi_null_dtw_cpp
NumericVector psi_null_dtw_cpp(NumericMatrix x, NumericMatrix y, const std::string& distance, bool diagonal, bool weighted, bool ignore_blocks, double bandwidth, int repetitions, const std::string& permutation, int block_size, int seed);
RcppExport SEXP _distantia_psi_null_dtw_cpp(SEXP xSEXP, SEXP ySEXP, SEXP distanceSEXP, SEXP diagonalSEXP, SEXP weightedSEXP, SEXP ignore_blocksSEXP, SEXP bandwidthSEXP, SEXP repetitionsSEXP, SEXP permutationSEXP, SEXP block_sizeSEXP, SEXP seedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type y(ySEXP);
    Rcpp::traits::input_parameter< const std::string& >::type distance(distanceSEXP);
    Rcpp::traits::input_parameter< bool >::type diagonal(diagonalSEXP);
    Rcpp::traits::input_parameter< bool >::type weighted(weightedSEXP);
    Rcpp::traits::input_parameter< bool >::type ignore_blocks(ignore_blocksSEXP);
    Rcpp::traits::input_parameter< double >::type bandwidth(bandwidthSEXP);
    Rcpp::traits::input_parameter< int >::type repetitions(repetitionsSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type permutation(permutationSEXP);
    Rcpp::traits::input_parameter< int >::type block_size(block_sizeSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    rcpp_result_gen = Rcpp::wrap(psi_null_dtw_cpp(x, y, distance, diagonal, weighted, ignore_blocks, bandwidth, repetitions, permutation, block_size, seed));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_distantia_auto_distance_cpp", (DL_FUNC) &_distantia_auto_distance_cpp, 2},
    {"_distantia_subset_matrix_by_rows_cpp", (DL_FUNC) &_distantia_subset_matrix_by_rows_cpp, 2},
    {"_distantia_auto_sum_full_cpp", (DL_FUNC) &_distantia_auto_sum_full_cpp, 3},
    {"_distantia_auto_sum_path_cpp", (DL_FUNC) &_distantia_auto_sum_path_cpp, 4},
    {"_distantia_auto_sum_cpp", (DL_FUNC) &_distantia_auto_sum_cpp, 5},
    {"_distantia_cost_matrix_diagonal_cpp", (DL_FUNC) &_distantia_cost_matrix_diagonal_cpp, 1},
    {"_distantia_cost_matrix_diagonal_weighted_cpp", (DL_FUNC) &_distantia_cost_matrix_diagonal_weighted_cpp, 1},
    {"_distantia_cost_matrix_orthogonal_cpp", (DL_FUNC) &_distantia_cost_matrix_orthogonal_cpp, 1},
    {"_distantia_cost_path_slotting_cpp", (DL_FUNC) &_distantia_cost_path_slotting_cpp, 2},
    {"_distantia_cost_path_orthogonal_bandwidth_cpp", (DL_FUNC) &_distantia_cost_path_orthogonal_bandwidth_cpp, 3},
    {"_distantia_cost_path_orthogonal_cpp", (DL_FUNC) &_distantia_cost_path_orthogonal_cpp, 2},
    {"_distantia_cost_path_diagonal_bandwidth_cpp", (DL_FUNC) &_distantia_cost_path_diagonal_bandwidth_cpp, 3},
    {"_distantia_cost_path_diagonal_cpp", (DL_FUNC) &_distantia_cost_path_diagonal_cpp, 2},
    {"_distantia_cost_path_trim_cpp", (DL_FUNC) &_distantia_cost_path_trim_cpp, 1},
    {"_distantia_cost_path_sum_cpp", (DL_FUNC) &_distantia_cost_path_sum_cpp, 1},
    {"_distantia_cost_path_cpp", (DL_FUNC) &_distantia_cost_path_cpp, 7},
    {"_distantia_distance_matrix_cpp", (DL_FUNC) &_distantia_distance_matrix_cpp, 3},
    {"_distantia_distance_ls_cpp", (DL_FUNC) &_distantia_distance_ls_cpp, 3},
    {"_distantia_distance_chebyshev_cpp", (DL_FUNC) &_distantia_distance_chebyshev_cpp, 2},
    {"_distantia_distance_jaccard_cpp", (DL_FUNC) &_distantia_distance_jaccard_cpp, 2},
    {"_distantia_distance_manhattan_cpp", (DL_FUNC) &_distantia_distance_manhattan_cpp, 2},
    {"_distantia_distance_euclidean_cpp", (DL_FUNC) &_distantia_distance_euclidean_cpp, 2},
    {"_distantia_distance_hellinger_cpp", (DL_FUNC) &_distantia_distance_hellinger_cpp, 2},
    {"_distantia_distance_chi_cpp", (DL_FUNC) &_distantia_distance_chi_cpp, 2},
    {"_distantia_distance_canberra_cpp", (DL_FUNC) &_distantia_distance_canberra_cpp, 2},
    {"_distantia_distance_russelrao_cpp", (DL_FUNC) &_distantia_distance_russelrao_cpp, 2},
    {"_distantia_distance_cosine_cpp", (DL_FUNC) &_distantia_distance_cosine_cpp, 2},
    {"_distantia_distance_hamming_cpp", (DL_FUNC) &_distantia_distance_hamming_cpp, 2},
    {"_distantia_distance_bray_curtis_cpp", (DL_FUNC) &_distantia_distance_bray_curtis_cpp, 2},
    {"_distantia_distance_sorensen_cpp", (DL_FUNC) &_distantia_distance_sorensen_cpp, 2},
    {"_distantia_update_path_dist_cpp", (DL_FUNC) &_distantia_update_path_dist_cpp, 4},
    {"_distantia_select_column_cpp", (DL_FUNC) &_distantia_select_column_cpp, 2},
    {"_distantia_delete_column_cpp", (DL_FUNC) &_distantia_delete_column_cpp, 2},
    {"_distantia_importance_ls_cpp", (DL_FUNC) &_distantia_importance_ls_cpp, 3},
    {"_distantia_importance_dtw_legacy_cpp", (DL_FUNC) &_distantia_importance_dtw_legacy_cpp, 7},
    {"_distantia_importance_dtw_cpp", (DL_FUNC) &_distantia_importance_dtw_cpp, 7},
    {"_distantia_permute_restricted_by_row_cpp", (DL_FUNC) &_distantia_permute_restricted_by_row_cpp, 3},
    {"_distantia_permute_free_by_row_cpp", (DL_FUNC) &_distantia_permute_free_by_row_cpp, 3},
    {"_distantia_permute_restricted_cpp", (DL_FUNC) &_distantia_permute_restricted_cpp, 3},
    {"_distantia_permute_free_cpp", (DL_FUNC) &_distantia_permute_free_cpp, 3},
    {"_distantia_psi_equation_cpp", (DL_FUNC) &_distantia_psi_equation_cpp, 3},
    {"_distantia_psi_ls_cpp", (DL_FUNC) &_distantia_psi_ls_cpp, 3},
    {"_distantia_psi_null_ls_cpp", (DL_FUNC) &_distantia_psi_null_ls_cpp, 7},
    {"_distantia_psi_dtw_cpp", (DL_FUNC) &_distantia_psi_dtw_cpp, 7},
    {"_distantia_psi_null_dtw_cpp", (DL_FUNC) &_distantia_psi_null_dtw_cpp, 11},
    {NULL, NULL, 0}
};

RcppExport void R_init_distantia(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}

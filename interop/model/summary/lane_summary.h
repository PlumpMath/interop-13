/** Summary statistics compiled by lane
 *
 *  @file
 *  @date  3/5/16
 *  @version 1.0
 *  @copyright GNU Public License.
 */
#pragma once
#include <cstddef>
#include "interop/model/summary/metric_stat.h"
#include "interop/model/summary/cycle_state_summary.h"

namespace illumina
{
namespace interop
{
namespace model
{
namespace summary
{

/**  Summary statistics compiled by lane
 *
 * @note The reported standard deviation is always between tiles, not cycles. For metrics like error metrics,
 * the mean over all cycles is used for each tile, before calculating the standard deviation.
 */
class lane_summary
{
public:
    /** Collection of metric statistics type */
    typedef metric_stat metric_stat_t;
public:
    /** Constructor
     *
     * @param lane lane number
     */
    lane_summary(const size_t lane=0) :
            m_lane(lane),
            m_tile_count(0),
            m_percent_gt_q30(0),
            m_yield_g(0),
            m_projected_yield_g(0),
            m_reads(0),
            m_reads_pf(0)
    {
    }

public:
    /** Get lane number
     *
     * @return lane number
     */
    size_t lane()const
    {
        return m_lane;
    }
    /** Set lane number
     *
     * @param val lane number
     */
    void lane(const size_t val)
    {
        m_lane = val;
    }
    /** Get number of tiles in the lane
     *
     * @return number of tiles in the lane
     */
    size_t tile_count()const
    {
        return m_tile_count;
    }
    /** Set number of tiles in the lane
     *
     * @param val number of tiles in the lane
     */
    void tile_count(const size_t val)
    {
        m_tile_count = val;
    }

public:
    /** Get the percent of bases greater than Q30
     *
     * @return percent of bases greater than Q30
     */
    float percent_gt_q30()const
    {
        return m_percent_gt_q30;
    }
    /** Set the percent of bases greater than Q30
     *
     * @param val percent of bases greater than Q30
     */
    void percent_gt_q30(const float val)
    {
        m_percent_gt_q30 = val;
    }
    /** Get the yield of the run in gigabases
     *
     * @return yield of the run in gigabases
     */
    float yield_g()const
    {
        return m_yield_g;
    }
    /** Set the yield of the run in gigabases
     *
     * @param val yield of the run in gigabases
     */
    void yield_g(const float val)
    {
        m_yield_g = val;
    }
    /** Get the projected yield of teh run in gigabases
     *
     * @return projected yield of teh run in gigabases
     */
    float projected_yield_g()const
    {
        return m_projected_yield_g;
    }
    /** Set the projected yield of teh run in gigabases
     *
     * @param val projected yield of teh run in gigabases
     */
    void projected_yield_g(const float val)
    {
        m_projected_yield_g = val;
    }
    /** Get the total number of clusters in the lane
     *
     * @return total number of clusters in the lane
     */
    float reads()const
    {
        return m_reads;
    }
    /** Set the total number of clusters in the lane
     *
     * @param val total number of clusters in the lane
     */
    void reads(const float val)
    {
        m_reads = val;
    }
    /** Get the total number of clusters passing filter in the lane
     *
     * @return total number of clusters passing filter in the lane
     */
    float reads_pf()const
    {
        return m_reads_pf;
    }
    /** Set the total number of clusters passing filter in the lane
     *
     * @param val total number of clusters passing filter in the lane
     */
    void reads_pf(const float val)
    {
        m_reads_pf = val;
    }

public:
    /** Get statistics summarizing the density of tiles in the lane
     *
     * @return statistics summarizing the density of tiles in the lane
     */
    const metric_stat_t& density()const
    {
        return m_density;
    }
    /** Get statistics summarizing the density of tiles in the lane
     *
     * @return statistics summarizing the density of tiles in the lane
     */
    metric_stat_t& density()
    {
        return m_density;
    }
    /** Get statistics summarizing the passing filter density of tiles in the lane
     *
     * @return statistics summarizing the passing filter density of tiles in the lane
     */
    const metric_stat_t& density_pf()const
    {
        return m_density_pf;
    }
    /** Get statistics summarizing the passing filter density of tiles in the lane
     *
     * @return statistics summarizing the passing filter density of tiles in the lane
     */
    metric_stat_t& density_pf()
    {
        return m_density_pf;
    }
    /** Get statistics summarizing the cluster count of tiles in the lane
     *
     * @return statistics summarizing the cluster count of tiles in the lane
     */
    const metric_stat_t& cluster_count()const
    {
        return m_cluster_count;
    }
    /** Get statistics summarizing the cluster count of tiles in the lane
     *
     * @return statistics summarizing the cluster count of tiles in the lane
     */
    metric_stat_t& cluster_count()
    {
        return m_cluster_count;
    }
    /** Get statistics summarizing the passing filter cluster count of tiles in the lane
     *
     * @return statistics summarizing the passing filter cluster count of tiles in the lane
     */
    const metric_stat_t& cluster_count_pf()const
    {
        return m_cluster_count_pf;
    }
    /** Get statistics summarizing the passing filter cluster count of tiles in the lane
     *
     * @return statistics summarizing the passing filter cluster count of tiles in the lane
     */
    metric_stat_t& cluster_count_pf()
    {
        return m_cluster_count_pf;
    }
    /** Get statistics summarizing the percent of clusters passing filter of tiles in the lane
     *
     * @return statistics summarizing the percent of clusters passing filter of tiles in the lane
     */
    const metric_stat_t& percent_pf()const
    {
        return m_percent_pf;
    }
    /** Get statistics summarizing the percent of clusters passing filter of tiles in the lane
     *
     * @return statistics summarizing the percent of clusters passing filter of tiles in the lane
     */
    metric_stat_t& percent_pf()
    {
        return m_percent_pf;
    }
    /** Get statistics summarizing the phasing of tiles in the lane
     *
     * @return statistics summarizing the phasing of tiles in the lane
     */
    const metric_stat_t& phasing()const
    {
        return m_phasing;
    }
    /** Get statistics summarizing the phasing of tiles in the lane
     *
     * @return statistics summarizing the phasing of tiles in the lane
     */
    metric_stat_t& phasing()
    {
        return m_phasing;
    }
    /** Get statistics summarizing the prephasing of tiles in the lane
     *
     * @return statistics summarizing the prephasing of tiles in the lane
     */
    const metric_stat_t& prephasing()const
    {
        return m_prephasing;
    }
    /** Get statistics summarizing the prephasing of tiles in the lane
     *
     * @return statistics summarizing the prephasing of tiles in the lane
     */
    metric_stat_t& prephasing()
    {
        return m_prephasing;
    }
    /** Get statistics summarizing the PhiX percent aligned of tiles in the lane
     *
     * @return statistics summarizing the PhiX percent aligned of tiles in the lane
     */
    const metric_stat_t& percent_aligned()const
    {
        return m_percent_aligned;
    }
    /** Get statistics summarizing the PhiX percent aligned of tiles in the lane
     *
     * @return statistics summarizing the PhiX percent aligned of tiles in the lane
     */
    metric_stat_t& percent_aligned()
    {
        return m_percent_aligned;
    }
    /** Get statistics summarizing the PhiX error rate of tiles in the lane
     *
     * @return statistics summarizing the PhiX error rate of tiles in the lane
     */
    const metric_stat_t& error_rate()const
    {
        return m_error_rate;
    }
    /** Get statistics summarizing the PhiX error rate of tiles in the lane
     *
     * @return statistics summarizing the PhiX error rate of tiles in the lane
     */
    metric_stat_t& error_rate()
    {
        return m_error_rate;
    }
    /** Get statistics summarizing the PhiX error rate over the first 35 cycles of tiles in the lane
     *
     * @return statistics summarizing the PhiX error rate over the first 35 cycles of tiles in the lane
     */
    const metric_stat_t& error_rate_35()const
    {
        return m_error_rate_35;
    }
    /** Get statistics summarizing the PhiX error rate over the first 35 cycles of tiles in the lane
     *
     * @return statistics summarizing the PhiX error rate over the first 35 cycles of tiles in the lane
     */
    metric_stat_t& error_rate_35()
    {
        return m_error_rate_35;
    }
    /** Get statistics summarizing the PhiX error rate over the first 50 cycles of tiles in the lane
     *
     * @return statistics summarizing the PhiX error rate over the first 50 cycles of tiles in the lane
     */
    const metric_stat_t& error_rate_50()const
    {
        return m_error_rate_50;
    }
    /** Get statistics summarizing the PhiX error rate over the first 50 cycles of tiles in the lane
     *
     * @return statistics summarizing the PhiX error rate over the first 50 cycles of tiles in the lane
     */
    metric_stat_t& error_rate_50()
    {
        return m_error_rate_50;
    }
    /** Get statistics summarizing the PhiX error rate over the first 75 cycles of tiles in the lane
     *
     * @return statistics summarizing the PhiX error rate over the first 75 cycles of tiles in the lane
     */
    const metric_stat_t& error_rate_75()const
    {
        return m_error_rate_75;
    }
    /** Get statistics summarizing the PhiX error rate over the first 75 cycles of tiles in the lane
     *
     * @return statistics summarizing the PhiX error rate over the first 75 cycles of tiles in the lane
     */
    metric_stat_t& error_rate_75()
    {
        return m_error_rate_75;
    }
    /** Get statistics summarizing the PhiX error rate over the first 100 cycles  of tiles in the lane
     *
     * @return statistics summarizing the PhiX error rate over the first 100 cycles  of tiles in the lane
     */
    const metric_stat_t& error_rate_100()const
    {
        return m_error_rate_100;
    }
    /** Get statistics summarizing the PhiX error rate over the first 100 cycles  of tiles in the lane
     *
     * @return statistics summarizing the PhiX error rate over the first 100 cycles  of tiles in the lane
     */
    metric_stat_t& error_rate_100()
    {
        return m_error_rate_100;
    }
    /** Get statistics summarizing the first cycle intensity of tiles in the lane
     *
     * @return statistics summarizing the first cycle intensity of tiles in the lane
     */
    const metric_stat_t& first_cycle_intensity()const
    {
        return m_first_cycle_intensity;
    }
    /** Get statistics summarizing the first cycle intensity of tiles in the lane
     *
     * @return statistics summarizing the first cycle intensity of tiles in the lane
     */
    metric_stat_t& first_cycle_intensity()
    {
        return m_first_cycle_intensity;
    }
    /** Get statistics summarizing the cycle of each RTA state of tiles in the lane
     *
     * @return statistics summarizing the cycle of each RTA state of tiles in the lane
     */
    const cycle_state_summary& cycle_state()const
    {
        return m_cycle_state;
    }
    /** Get statistics summarizing the cycle of each RTA state of tiles in the lane
     *
     * @return statistics summarizing the cycle of each RTA state of tiles in the lane
     */
    cycle_state_summary& cycle_state()
    {
        return m_cycle_state;
    }

private:
    size_t m_lane;
    size_t m_tile_count;

private:
    float m_percent_gt_q30;
    float m_yield_g;
    float m_projected_yield_g;
    float m_reads;
    float m_reads_pf;

private:
    metric_stat_t m_density;
    metric_stat_t m_density_pf;
    metric_stat_t m_cluster_count;
    metric_stat_t m_cluster_count_pf;
    metric_stat_t m_percent_pf;
    metric_stat_t m_phasing;
    metric_stat_t m_prephasing;
    metric_stat_t m_percent_aligned;
    metric_stat_t m_error_rate;
    metric_stat_t m_error_rate_35;
    metric_stat_t m_error_rate_50;
    metric_stat_t m_error_rate_75;
    metric_stat_t m_error_rate_100;
    metric_stat_t m_first_cycle_intensity;
    cycle_state_summary m_cycle_state;
};

}
}
}
}

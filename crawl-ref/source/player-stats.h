#ifndef PLAYER_STATS_H
#define PLAYER_STATS_H

enum stat_desc_type
{
    SD_NAME,
    SD_LOSS,
    SD_DECREASE,
    SD_INCREASE,
    NUM_STAT_DESCS
};

const char* stat_desc(stat_type stat, stat_desc_type desc);

bool attribute_increase();

void modify_stat(stat_type which_stat, int amount, bool suppress_msg);

void notify_stat_change(stat_type which_stat, int amount, bool suppress_msg);
void notify_stat_change();

void jiyva_stat_action();

bool lose_stat(stat_type which_stat, int stat_loss, bool force = false);

bool restore_stat(stat_type which_stat, int stat_gain,
                  bool suppress_msg, bool recovery = false);

duration_type stat_zero_duration(stat_type stat);
bool have_stat_zero();
void update_stat_zero(int time);

#endif

#include "main.h"


typedef struct Video {
    char *name;
    int unique_views;
} Video;

typedef struct Viewer {
    char *username;
    Video *watched_videos;
    int watched_videos_size;
} Viewer;

int count_views(Viewer **viewers, int viewers_size, char *video_name)
{
    printf()

    /*

    int rev = 0;
    for(int j = 0; j < viewers_size; j++)
    {


    for(int i = 0; i < (*viewers)->watched_videos_size ; i++)
      {


        printf("123\n");
        printf("%x\n",(*viewers)->watched_videos->name);
        printf("%x\n",viewers[i]);
        printf("%x\n",*viewers[i]);
        printf("%x\n",viewers[i]->username);

        printf("%x\n",(*viewers)->watched_videos[i].name);

        printf("%x\n",viewers);
        printf("%x\n",viewers[0]);
        printf("%x\n",&(viewers[j])->watched_videos_size);

        if(!strcmp( (viewers[j])->watched_videos[i].name, video_name  ))
          rev++;
        //if(! (strcmp( (*viewers)->watched_videos[i].name, video_name  )) )
        //  rev++;

      }

    }
    */
    return rev;
}

#ifndef RunTests
int main()
{
    Video videos[] = { {.name = "Soccer", .unique_views = 500},
                       {.name = "Basketball", .unique_views = 1000} };
    Viewer viewer = {.username = "Dave", .watched_videos = videos,
                     .watched_videos_size = 2};
    Viewer viewer2 = {.username = "Goo", .watched_videos = videos,
                     .watched_videos_size = 2};

    Viewer *viewers[] = { &viewer , &viewer2};
    printf("%d", count_views(viewers, 2, "Soccer")); /* should print 1 */
}
#endif

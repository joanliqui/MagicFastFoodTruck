using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Radio : FoodTruckObject
{
    [SerializeField] List<AudioClip> radioClips;
    AudioSource source;
    int n;
    Vector3 normalScale;
    Animator anim;

    void Start()
    {
        source = GetComponent<AudioSource>();
        anim = GetComponent<Animator>();
        mat = GetComponentInChildren<MeshRenderer>().material;

        normalScale = transform.localScale;
        n = 0;
        source.clip = radioClips[n];
        source.loop = true;
        source.Play();
        anim.SetBool("isPlaying", true);
    }



    public void PassSong()
    {
        //Venimos de estar apagados y nos encendemos
        if(n == -1)
        {
            anim.SetBool("isPlaying", true);
        }

        source.Stop();
        n++;
        
        //Ya no quedan mas canciones, se apaga
        if(n >= radioClips.Count)
        {
            n = -1;
            anim.SetBool("isPlaying", false);
            transform.localScale = normalScale;
        }
        else
        {
            source.clip = radioClips[n];
            source.Play();
        }
    }
}

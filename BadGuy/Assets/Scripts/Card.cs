using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class Card : MonoBehaviour, IDragHandler , IEndDragHandler,IBeginDragHandler
{
    public GameManager gameManager;
    public TextMeshProUGUI rightT, leftT, TextV;
    public string textM;
    public string rightAnswer;
    public string leftAnswer;
    public int oneV, twoV,threeV,fourV;
    public Image cvOne, cvTwo, cvThree, cvFour;
    public GameObject rightA, leftA;

    Color visible = new Color(255, 255, 255, 255); Color invisible = new Color(255, 255, 255, 0);

    private Vector3 _initialPosition;
    private float _distanceMoved;
    private bool _swipeLeft;

    private void Awake()
    {
        gameObject.GetComponent<RectTransform>().SetSiblingIndex(2);
        gameManager = GameObject.FindWithTag("GameController").GetComponent<GameManager>();
        rightT.text = rightAnswer; leftT.text = leftAnswer;TextV.text = textM;
        cvOne = GameObject.FindWithTag("CV1").GetComponent<Image>(); cvTwo = GameObject.FindWithTag("CV2").GetComponent<Image>();
        cvThree = GameObject.FindWithTag("CV3").GetComponent<Image>(); cvFour = GameObject.FindWithTag("CV4").GetComponent<Image>();
        BtnTrigger(oneV, cvOne, false);
        BtnTrigger(twoV, cvTwo, false);
        BtnTrigger(threeV, cvThree, false);
        BtnTrigger(fourV, cvFour, false);
    }

    public void MakeChoice(int answerType)
    {
        gameManager.ChangeValue(oneV * answerType, twoV * answerType, threeV * answerType, fourV * answerType);
        gameManager.SpawnCard();
        gameManager.SetSlider();
        Destroy(gameObject);
    }
    void BtnTrigger(int x, Image ýx, bool state)
    {
        if (state && x != 0)
        {
            ýx.color = visible;
        }
        else
        {
            ýx.color = invisible;
        }
    }

    public void OnDrag(PointerEventData eventData)
    {
        
        transform.localPosition = new Vector2(transform.localPosition.x + eventData.delta.x, transform.localPosition.y);
        if (transform.localPosition.x - _initialPosition.x < -0.1 * Screen.width)
        {
            leftA.SetActive(true);
            rightA.SetActive(false);
        }
        else if (transform.localPosition.x - _initialPosition.x > 0.1 * Screen.width)
        {
            rightA.SetActive(true);
            leftA.SetActive(false);
        }
        if(transform.localPosition.x - _initialPosition.x > -0.1 * Screen.width && transform.localPosition.x - _initialPosition.x < 0.1 * Screen.width)
        {
            leftA.SetActive(false);
            rightA.SetActive(false);
        }
    }

    public void OnBeginDrag(PointerEventData eventData)
    {
        _initialPosition = transform.localPosition;
        BtnTrigger(oneV, cvOne, true);
        BtnTrigger(twoV, cvTwo, true);
        BtnTrigger(threeV, cvThree, true);
        BtnTrigger(fourV, cvFour, true);
    }
    public void OnEndDrag(PointerEventData eventData)
    {
        BtnTrigger(oneV, cvOne, false);
        BtnTrigger(twoV, cvTwo, false);
        BtnTrigger(threeV, cvThree, false);
        BtnTrigger(fourV, cvFour, false);
        rightA.SetActive(false);
        leftA.SetActive(false);
        _distanceMoved = Mathf.Abs(transform.localPosition.x - _initialPosition.x);
        if (_distanceMoved < 0.1 * Screen.width)
        {
            transform.localPosition = _initialPosition;
        }
        else
        {
            if (transform.localPosition.x > _initialPosition.x)
            {
                _swipeLeft = false;
                MakeChoice(1);
            }
            else
            {
                _swipeLeft = true;
                MakeChoice(-1);
            }
        }
     }
}
